/*
 * Copyright (c) 2020 - 2024 the ThorVG project. All rights reserved.

 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "../../lv_conf_internal.h"
#if LV_USE_THORVG_INTERNAL

#include "tvgCommon.h"
#include "tvgTaskScheduler.h"
#include "tvgLoader.h"

#ifdef _WIN32
    #include <cstring>
#endif

#ifdef THORVG_SW_RASTER_SUPPORT
    #include "tvgSwRenderer.h"
#endif

#ifdef THORVG_GL_RASTER_SUPPORT
    #include "tvgGlRenderer.h"
#endif

#ifdef THORVG_WG_RASTER_SUPPORT
    #include "tvgWgRenderer.h"
#endif


/************************************************************************/
/* Internal Class Implementation                                        */
/************************************************************************/

static int _initCnt = 0;
static uint16_t _version = 0;

//enum class operation helper
static constexpr bool operator &(CanvasEngine a, CanvasEngine b)
{
    return int(a) & int(b);
}

static bool _buildVersionInfo(uint32_t* major, uint32_t* minor, uint32_t* micro)
{
    auto VER = THORVG_VERSION_STRING;
    auto p = VER;
    const char* x;

    if (!(x = strchr(p, '.'))) return false;
    uint32_t majorVal = atoi(p);
    p = x + 1;

    if (!(x = strchr(p, '.'))) return false;
    uint32_t minorVal = atoi(p);
    p = x + 1;

    uint32_t microVal = atoi(p);

    char sum[7];
    snprintf(sum, sizeof(sum), "%" PRIu32 "%02" PRIu32 "%02" PRIu32, majorVal, minorVal, microVal);
    _version = atoi(sum);

    if (major) *major = majorVal;
    if (minor) *minor = minorVal;
    if (micro) *micro = microVal;

    return true;
}


/************************************************************************/
/* External Class Implementation                                        */
/************************************************************************/

Result Initializer::init(CanvasEngine engine, uint32_t threads) noexcept
{
    auto nonSupport = true;
    if (static_cast<int>(engine) == 0) return Result::InvalidArguments;

    if (engine & CanvasEngine::Sw) {
        #ifdef THORVG_SW_RASTER_SUPPORT
            if (!SwRenderer::init(threads)) return Result::FailedAllocation;
            nonSupport = false;
        #endif
    }

    if (engine & CanvasEngine::Gl) {
        #ifdef THORVG_GL_RASTER_SUPPORT
            if (!GlRenderer::init(threads)) return Result::FailedAllocation;
            nonSupport = false;
        #endif
    }

    if (engine & CanvasEngine::Wg) {
        #ifdef THORVG_WG_RASTER_SUPPORT
            if (!WgRenderer::init(threads)) return Result::FailedAllocation;
            nonSupport = false;
        #endif
    }

    if (nonSupport) return Result::NonSupport;

    if (_initCnt++ > 0) return Result::Success;

    if (!_buildVersionInfo(nullptr, nullptr, nullptr)) return Result::Unknown;

    if (!LoaderMgr::init()) return Result::Unknown;

    TaskScheduler::init(threads);

    return Result::Success;
}


Result Initializer::term(CanvasEngine engine) noexcept
{
    if (_initCnt == 0) return Result::InsufficientCondition;

    auto nonSupport = true;
    if (static_cast<int>(engine) == 0) return Result::InvalidArguments;

    if (engine & CanvasEngine::Sw) {
        #ifdef THORVG_SW_RASTER_SUPPORT
            if (!SwRenderer::term()) return Result::InsufficientCondition;
            nonSupport = false;
        #endif
    }

    if (engine & CanvasEngine::Gl) {
        #ifdef THORVG_GL_RASTER_SUPPORT
            if (!GlRenderer::term()) return Result::InsufficientCondition;
            nonSupport = false;
        #endif
    }

    if (engine & CanvasEngine::Wg) {
        #ifdef THORVG_WG_RASTER_SUPPORT
            if (!WgRenderer::term()) return Result::InsufficientCondition;
            nonSupport = false;
        #endif
    }

    if (nonSupport) return Result::NonSupport;

    if (--_initCnt > 0) return Result::Success;

    TaskScheduler::term();

    if (!LoaderMgr::term()) return Result::Unknown;

    return Result::Success;
}


const char* Initializer::version(uint32_t* major, uint32_t* minor, uint32_t* micro) noexcept
{
    if ((!major && ! minor && !micro) || _buildVersionInfo(major, minor, micro)) return THORVG_VERSION_STRING;
    return nullptr;
}


uint16_t THORVG_VERSION_NUMBER()
{
    return _version;
}

#endif /* LV_USE_THORVG_INTERNAL */

