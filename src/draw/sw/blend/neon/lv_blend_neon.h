/**
 * @file lv_blend_neon.h
 *
 */

#ifndef LV_BLEND_NEON_H
#define LV_BLEND_NEON_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "../../../../lv_conf_internal.h"

#if LV_USE_DRAW_SW_ASM == LV_DRAW_SW_ASM_NEON

#ifdef LV_DRAW_SW_NEON_CUSTOM_INCLUDE
#include LV_DRAW_SW_NEON_CUSTOM_INCLUDE
#endif

/*********************
 *      DEFINES
 *********************/
#if !defined(__ASSEMBLY__)

#if __GNUC__ >= 4
#define LVGL_HIDDEN __attribute__((visibility("hidden")))
#else
#define LVGL_HIDDEN
#endif

#ifndef LV_DRAW_SW_COLOR_BLEND_TO_RGB565
#define LV_DRAW_SW_COLOR_BLEND_TO_RGB565(dsc) \
    lv_color_blend_to_rgb565_neon(dsc)
#endif

#ifndef LV_DRAW_SW_COLOR_BLEND_TO_RGB565_WITH_OPA
#define LV_DRAW_SW_COLOR_BLEND_TO_RGB565_WITH_OPA(dsc) \
    lv_color_blend_to_rgb565_with_opa_neon(dsc)
#endif

#ifndef LV_DRAW_SW_COLOR_BLEND_TO_RGB565_WITH_MASK
#define LV_DRAW_SW_COLOR_BLEND_TO_RGB565_WITH_MASK(dsc) \
    lv_color_blend_to_rgb565_with_mask_neon(dsc)
#endif

#ifndef LV_DRAW_SW_COLOR_BLEND_TO_RGB565_MIX_MASK_OPA
#define LV_DRAW_SW_COLOR_BLEND_TO_RGB565_MIX_MASK_OPA(dsc) \
    lv_color_blend_to_rgb565_mix_mask_opa_neon(dsc)
#endif

#ifndef LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB565
#define LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB565(dsc)  \
    lv_rgb565_blend_normal_to_rgb565_neon(dsc)
#endif

#ifndef LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB565_WITH_OPA
#define LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB565_WITH_OPA(dsc)  \
    lv_rgb565_blend_normal_to_rgb565_with_opa_neon(dsc)
#endif

#ifndef LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB565_WITH_MASK
#define LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB565_WITH_MASK(dsc)  \
    lv_rgb565_blend_normal_to_rgb565_with_mask_neon(dsc)
#endif

#ifndef LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB565_MIX_MASK_OPA
#define LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB565_MIX_MASK_OPA(dsc)  \
    lv_rgb565_blend_normal_to_rgb565_mix_mask_opa_neon(dsc)
#endif

#ifndef LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB565
#define LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB565(dsc, src_px_size)  \
    lv_rgb888_blend_normal_to_rgb565_neon(dsc, src_px_size)
#endif

#ifndef LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB565_WITH_OPA
#define LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB565_WITH_OPA(dsc, src_px_size)  \
    lv_rgb888_blend_normal_to_rgb565_with_opa_neon(dsc, src_px_size)
#endif

#ifndef LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB565_WITH_MASK
#define LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB565_WITH_MASK(dsc, src_px_size)  \
    lv_rgb888_blend_normal_to_rgb565_with_mask_neon(dsc, src_px_size)
#endif

#ifndef LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB565_MIX_MASK_OPA
#define LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB565_MIX_MASK_OPA(dsc, src_px_size)  \
    lv_rgb888_blend_normal_to_rgb565_mix_mask_opa_neon(dsc, src_px_size)
#endif

#ifndef LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB565
#define LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB565(dsc)  \
    lv_argb8888_blend_normal_to_rgb565_neon(dsc)
#endif

#ifndef LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB565_WITH_OPA
#define LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB565_WITH_OPA(dsc)  \
    lv_argb8888_blend_normal_to_rgb565_with_opa_neon(dsc)
#endif

#ifndef LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB565_WITH_MASK
#define LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB565_WITH_MASK(dsc)  \
    lv_argb8888_blend_normal_to_rgb565_with_mask_neon(dsc)
#endif

#ifndef LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB565_MIX_MASK_OPA
#define LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB565_MIX_MASK_OPA(dsc)  \
    lv_argb8888_blend_normal_to_rgb565_mix_mask_opa_neon(dsc)
#endif

#ifndef LV_DRAW_SW_COLOR_BLEND_TO_RGB888
#define LV_DRAW_SW_COLOR_BLEND_TO_RGB888(dsc, dst_px_size) \
    lv_color_blend_to_rgb888_neon(dsc, dst_px_size)
#endif

#ifndef LV_DRAW_SW_COLOR_BLEND_TO_RGB888_WITH_OPA
#define LV_DRAW_SW_COLOR_BLEND_TO_RGB888_WITH_OPA(dsc, dst_px_size) \
    lv_color_blend_to_rgb888_with_opa_neon(dsc, dst_px_size)
#endif

#ifndef LV_DRAW_SW_COLOR_BLEND_TO_RGB888_WITH_MASK
#define LV_DRAW_SW_COLOR_BLEND_TO_RGB888_WITH_MASK(dsc, dst_px_size) \
    lv_color_blend_to_rgb888_with_mask_neon(dsc, dst_px_size)
#endif

#ifndef LV_DRAW_SW_COLOR_BLEND_TO_RGB888_MIX_MASK_OPA
#define LV_DRAW_SW_COLOR_BLEND_TO_RGB888_MIX_MASK_OPA(dsc, dst_px_size) \
    lv_color_blend_to_rgb888_mix_mask_opa_neon(dsc, dst_px_size)
#endif

#ifndef LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB888
#define LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB888(dsc, dst_px_size)  \
    lv_rgb565_blend_normal_to_rgb888_neon(dsc, dst_px_size)
#endif

#ifndef LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB888_WITH_OPA
#define LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB888_WITH_OPA(dsc, dst_px_size)  \
    lv_rgb565_blend_normal_to_rgb888_with_opa_neon(dsc, dst_px_size)
#endif

#ifndef LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB888_WITH_MASK
#define LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB888_WITH_MASK(dsc, dst_px_size)  \
    lv_rgb565_blend_normal_to_rgb888_with_mask_neon(dsc, dst_px_size)
#endif

#ifndef LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB888_MIX_MASK_OPA
#define LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_RGB888_MIX_MASK_OPA(dsc, dst_px_size)  \
    lv_rgb565_blend_normal_to_rgb888_mix_mask_opa_neon(dsc, dst_px_size)
#endif

#ifndef LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB888
#define LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB888(dsc, dst_px_size, src_px_size)  \
    lv_rgb888_blend_normal_to_rgb888_neon(dsc, dst_px_size, src_px_size)
#endif

#ifndef LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB888_WITH_OPA
#define LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB888_WITH_OPA(dsc, dst_px_size, src_px_size)  \
    lv_rgb888_blend_normal_to_rgb888_with_opa_neon(dsc, dst_px_size, src_px_size)
#endif

#ifndef LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB888_WITH_MASK
#define LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB888_WITH_MASK(dsc, dst_px_size, src_px_size)  \
    lv_rgb888_blend_normal_to_rgb888_with_mask_neon(dsc, dst_px_size, src_px_size)
#endif

#ifndef LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB888_MIX_MASK_OPA
#define LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_RGB888_MIX_MASK_OPA(dsc, dst_px_size, src_px_size)  \
    lv_rgb888_blend_normal_to_rgb888_mix_mask_opa_neon(dsc, dst_px_size, src_px_size)
#endif

#ifndef LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB888
#define LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB888(dsc, dst_px_size)  \
    lv_argb8888_blend_normal_to_rgb888_neon(dsc, dst_px_size)
#endif

#ifndef LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB888_WITH_OPA
#define LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB888_WITH_OPA(dsc, dst_px_size)  \
    lv_argb8888_blend_normal_to_rgb888_with_opa_neon(dsc, dst_px_size)
#endif

#ifndef LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB888_WITH_MASK
#define LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB888_WITH_MASK(dsc, dst_px_size)  \
    lv_argb8888_blend_normal_to_rgb888_with_mask_neon(dsc, dst_px_size)
#endif

#ifndef LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB888_MIX_MASK_OPA
#define LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_RGB888_MIX_MASK_OPA(dsc, dst_px_size)  \
    lv_argb8888_blend_normal_to_rgb888_mix_mask_opa_neon(dsc, dst_px_size)
#endif

#ifndef LV_DRAW_SW_COLOR_BLEND_TO_ARGB8888
#define LV_DRAW_SW_COLOR_BLEND_TO_ARGB8888(dsc) \
    lv_color_blend_to_argb8888_neon(dsc)
#endif

#ifndef LV_DRAW_SW_COLOR_BLEND_TO_ARGB8888_WITH_OPA
#define LV_DRAW_SW_COLOR_BLEND_TO_ARGB8888_WITH_OPA(dsc) \
    lv_color_blend_to_argb8888_with_opa_neon(dsc)
#endif

#ifndef LV_DRAW_SW_COLOR_BLEND_TO_ARGB8888_WITH_MASK
#define LV_DRAW_SW_COLOR_BLEND_TO_ARGB8888_WITH_MASK(dsc) \
    lv_color_blend_to_argb8888_with_mask_neon(dsc)
#endif

#ifndef LV_DRAW_SW_COLOR_BLEND_TO_ARGB8888_MIX_MASK_OPA
#define LV_DRAW_SW_COLOR_BLEND_TO_ARGB8888_MIX_MASK_OPA(dsc) \
    lv_color_blend_to_argb8888_mix_mask_opa_neon(dsc)
#endif

#ifndef LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_ARGB8888
#define LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_ARGB8888(dsc)  \
    lv_rgb565_blend_normal_to_argb8888_neon(dsc)
#endif

#ifndef LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_ARGB8888_WITH_OPA
#define LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_ARGB8888_WITH_OPA(dsc)  \
    lv_rgb565_blend_normal_to_argb8888_with_opa_neon(dsc)
#endif

#ifndef LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_ARGB8888_WITH_MASK
#define LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_ARGB8888_WITH_MASK(dsc)  \
    lv_rgb565_blend_normal_to_argb8888_with_mask_neon(dsc)
#endif

#ifndef LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_ARGB8888_MIX_MASK_OPA
#define LV_DRAW_SW_RGB565_BLEND_NORMAL_TO_ARGB8888_MIX_MASK_OPA(dsc)  \
    lv_rgb565_blend_normal_to_argb8888_mix_mask_opa_neon(dsc)
#endif

#ifndef LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_ARGB8888
#define LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_ARGB8888(dsc, src_px_size)  \
    lv_rgb888_blend_normal_to_argb8888_neon(dsc, src_px_size)
#endif

#ifndef LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_ARGB8888_WITH_OPA
#define LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_ARGB8888_WITH_OPA(dsc, src_px_size)  \
    lv_rgb888_blend_normal_to_argb8888_with_opa_neon(dsc, src_px_size)
#endif

#ifndef LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_ARGB8888_WITH_MASK
#define LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_ARGB8888_WITH_MASK(dsc, src_px_size)  \
    lv_rgb888_blend_normal_to_argb8888_with_mask_neon(dsc, src_px_size)
#endif

#ifndef LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_ARGB8888_MIX_MASK_OPA
#define LV_DRAW_SW_RGB888_BLEND_NORMAL_TO_ARGB8888_MIX_MASK_OPA(dsc, src_px_size)  \
    lv_rgb888_blend_normal_to_argb8888_mix_mask_opa_neon(dsc, src_px_size)
#endif

#ifndef LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_ARGB8888
#define LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_ARGB8888(dsc)  \
    lv_argb8888_blend_normal_to_argb8888_neon(dsc)
#endif

#ifndef LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_ARGB8888_WITH_OPA
#define LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_ARGB8888_WITH_OPA(dsc)  \
    lv_argb8888_blend_normal_to_argb8888_with_opa_neon(dsc)
#endif

#ifndef LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_ARGB8888_WITH_MASK
#define LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_ARGB8888_WITH_MASK(dsc)  \
    lv_argb8888_blend_normal_to_argb8888_with_mask_neon(dsc)
#endif

#ifndef LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_ARGB8888_MIX_MASK_OPA
#define LV_DRAW_SW_ARGB8888_BLEND_NORMAL_TO_ARGB8888_MIX_MASK_OPA(dsc)  \
    lv_argb8888_blend_normal_to_argb8888_mix_mask_opa_neon(dsc)
#endif

/**********************
 *      TYPEDEFS
 **********************/

typedef struct {
    uint32_t opa;
    void * dst_buf;
    uint32_t dst_w;
    uint32_t dst_h;
    uint32_t dst_stride;
    const void * src_buf;
    uint32_t src_stride;
    const lv_opa_t * mask_buf;
    uint32_t mask_stride;
} asm_dsc_t;
/**********************
 * GLOBAL PROTOTYPES
 **********************/

extern LVGL_HIDDEN void _lv_color_blend_to_rgb565_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_color_blend_to_rgb565_neon(lv_draw_sw_blend_fill_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = &dsc->color
    };

    _lv_color_blend_to_rgb565_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_color_blend_to_rgb565_with_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_color_blend_to_rgb565_with_opa_neon(lv_draw_sw_blend_fill_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = &dsc->color
    };
    _lv_color_blend_to_rgb565_with_opa_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_color_blend_to_rgb565_with_mask_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_color_blend_to_rgb565_with_mask_neon(lv_draw_sw_blend_fill_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = &dsc->color,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    _lv_color_blend_to_rgb565_with_mask_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_color_blend_to_rgb565_mix_mask_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_color_blend_to_rgb565_mix_mask_opa_neon(lv_draw_sw_blend_fill_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = &dsc->color,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    _lv_color_blend_to_rgb565_mix_mask_opa_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_rgb565_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb565_blend_normal_to_rgb565_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    _lv_rgb565_blend_normal_to_rgb565_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_rgb565_with_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb565_blend_normal_to_rgb565_with_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    _lv_rgb565_blend_normal_to_rgb565_with_opa_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_rgb565_with_mask_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb565_blend_normal_to_rgb565_with_mask_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    _lv_rgb565_blend_normal_to_rgb565_with_mask_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_rgb565_mix_mask_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb565_blend_normal_to_rgb565_mix_mask_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    _lv_rgb565_blend_normal_to_rgb565_mix_mask_opa_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_rgb565_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_rgb565_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb888_blend_normal_to_rgb565_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                uint32_t src_px_size)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    if(src_px_size == 3) {
        _lv_rgb888_blend_normal_to_rgb565_neon(&asm_dsc);
    }
    else {
        _lv_xrgb8888_blend_normal_to_rgb565_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_rgb565_with_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_rgb565_with_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb888_blend_normal_to_rgb565_with_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                         uint32_t src_px_size)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    if(src_px_size == 3) {
        _lv_rgb888_blend_normal_to_rgb565_with_opa_neon(&asm_dsc);
    }
    else {
        _lv_xrgb8888_blend_normal_to_rgb565_with_opa_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_rgb565_with_mask_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_rgb565_with_mask_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb888_blend_normal_to_rgb565_with_mask_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                          uint32_t src_px_size)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    if(src_px_size == 3) {
        _lv_rgb888_blend_normal_to_rgb565_with_mask_neon(&asm_dsc);
    }
    else {
        _lv_xrgb8888_blend_normal_to_rgb565_with_mask_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_rgb565_mix_mask_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_rgb565_mix_mask_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb888_blend_normal_to_rgb565_mix_mask_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                             uint32_t src_px_size)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    if(src_px_size == 3) {
        _lv_rgb888_blend_normal_to_rgb565_mix_mask_opa_neon(&asm_dsc);
    }
    else {
        _lv_xrgb8888_blend_normal_to_rgb565_mix_mask_opa_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_rgb565_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_argb8888_blend_normal_to_rgb565_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    _lv_argb8888_blend_normal_to_rgb565_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_rgb565_with_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_argb8888_blend_normal_to_rgb565_with_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    _lv_argb8888_blend_normal_to_rgb565_with_opa_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_rgb565_with_mask_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_argb8888_blend_normal_to_rgb565_with_mask_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    _lv_argb8888_blend_normal_to_rgb565_with_mask_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_rgb565_mix_mask_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_argb8888_blend_normal_to_rgb565_mix_mask_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    _lv_argb8888_blend_normal_to_rgb565_mix_mask_opa_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_color_blend_to_rgb888_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_color_blend_to_xrgb8888_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_color_blend_to_rgb888_neon(lv_draw_sw_blend_fill_dsc_t * dsc, uint32_t dst_px_size)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = &dsc->color
    };
    if(dst_px_size == 3) {
        _lv_color_blend_to_rgb888_neon(&asm_dsc);
    }
    else {
        _lv_color_blend_to_xrgb8888_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_color_blend_to_rgb888_with_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_color_blend_to_xrgb8888_with_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_color_blend_to_rgb888_with_opa_neon(lv_draw_sw_blend_fill_dsc_t * dsc,
                                                                 uint32_t dst_px_size)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = &dsc->color
    };
    if(dst_px_size == 3) {
        _lv_color_blend_to_rgb888_with_opa_neon(&asm_dsc);
    }
    else {
        _lv_color_blend_to_xrgb8888_with_opa_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_color_blend_to_rgb888_with_mask_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_color_blend_to_xrgb8888_with_mask_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_color_blend_to_rgb888_with_mask_neon(lv_draw_sw_blend_fill_dsc_t * dsc,
                                                                  uint32_t dst_px_size)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = &dsc->color,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    if(dst_px_size == 3) {
        _lv_color_blend_to_rgb888_with_mask_neon(&asm_dsc);
    }
    else {
        _lv_color_blend_to_xrgb8888_with_mask_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_color_blend_to_rgb888_mix_mask_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_color_blend_to_xrgb8888_mix_mask_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_color_blend_to_rgb888_mix_mask_opa_neon(lv_draw_sw_blend_fill_dsc_t * dsc,
                                                                     uint32_t dst_px_size)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = &dsc->color,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    if(dst_px_size == 3) {
        _lv_color_blend_to_rgb888_mix_mask_opa_neon(&asm_dsc);
    }
    else {
        _lv_color_blend_to_xrgb8888_mix_mask_opa_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_rgb888_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_xrgb8888_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb565_blend_normal_to_rgb888_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                uint32_t dst_px_size)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    if(dst_px_size == 3) {
        _lv_rgb565_blend_normal_to_rgb888_neon(&asm_dsc);
    }
    else {
        _lv_rgb565_blend_normal_to_xrgb8888_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_rgb888_with_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_xrgb8888_with_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb565_blend_normal_to_rgb888_with_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                         uint32_t dst_px_size)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    if(dst_px_size == 3) {
        _lv_rgb565_blend_normal_to_rgb888_with_opa_neon(&asm_dsc);
    }
    else {
        _lv_rgb565_blend_normal_to_xrgb8888_with_opa_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_rgb888_with_mask_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_xrgb8888_with_mask_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb565_blend_normal_to_rgb888_with_mask_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                          uint32_t dst_px_size)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    if(dst_px_size == 3) {
        _lv_rgb565_blend_normal_to_rgb888_with_mask_neon(&asm_dsc);
    }
    else {
        _lv_rgb565_blend_normal_to_xrgb8888_with_mask_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_rgb888_mix_mask_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_xrgb8888_mix_mask_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb565_blend_normal_to_rgb888_mix_mask_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                             uint32_t dst_px_size)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    if(dst_px_size == 3) {
        _lv_rgb565_blend_normal_to_rgb888_mix_mask_opa_neon(&asm_dsc);
    }
    else {
        _lv_rgb565_blend_normal_to_xrgb8888_mix_mask_opa_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_rgb888_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_xrgb8888_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_rgb888_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_xrgb8888_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb888_blend_normal_to_rgb888_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                uint32_t dst_px_size,
                                                                uint32_t src_px_size)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    if(dst_px_size == 3) {
        if(src_px_size == 3) {
            _lv_rgb888_blend_normal_to_rgb888_neon(&asm_dsc);
        }
        else {
            _lv_xrgb8888_blend_normal_to_rgb888_neon(&asm_dsc);
        }
    }
    else {
        if(src_px_size == 3) {
            _lv_rgb888_blend_normal_to_xrgb8888_neon(&asm_dsc);
        }
        else {
            _lv_xrgb8888_blend_normal_to_xrgb8888_neon(&asm_dsc);
        }
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_rgb888_with_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_xrgb8888_with_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_rgb888_with_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_xrgb8888_with_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb888_blend_normal_to_rgb888_with_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                         uint32_t dst_px_size, uint32_t src_px_size)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    if(dst_px_size == 3) {
        if(src_px_size == 3) {
            _lv_rgb888_blend_normal_to_rgb888_with_opa_neon(&asm_dsc);
        }
        else {
            _lv_xrgb8888_blend_normal_to_rgb888_with_opa_neon(&asm_dsc);
        }
    }
    else {
        if(src_px_size == 3) {
            _lv_rgb888_blend_normal_to_xrgb8888_with_opa_neon(&asm_dsc);
        }
        else {
            _lv_xrgb8888_blend_normal_to_xrgb8888_with_opa_neon(&asm_dsc);
        }
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_rgb888_with_mask_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_xrgb8888_with_mask_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_rgb888_with_mask_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_xrgb8888_with_mask_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb888_blend_normal_to_rgb888_with_mask_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                          uint32_t dst_px_size, uint32_t src_px_size)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    if(dst_px_size == 3) {
        if(src_px_size == 3) {
            _lv_rgb888_blend_normal_to_rgb888_with_mask_neon(&asm_dsc);
        }
        else {
            _lv_xrgb8888_blend_normal_to_rgb888_with_mask_neon(&asm_dsc);
        }
    }
    else {
        if(src_px_size == 3) {
            _lv_rgb888_blend_normal_to_xrgb8888_with_mask_neon(&asm_dsc);
        }
        else {
            _lv_xrgb8888_blend_normal_to_xrgb8888_with_mask_neon(&asm_dsc);
        }
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_rgb888_mix_mask_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_xrgb8888_mix_mask_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_rgb888_mix_mask_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_xrgb8888_mix_mask_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb888_blend_normal_to_rgb888_mix_mask_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                             uint32_t dst_px_size, uint32_t src_px_size)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    if(dst_px_size == 3) {
        if(src_px_size == 3) {
            _lv_rgb888_blend_normal_to_rgb888_mix_mask_opa_neon(&asm_dsc);
        }
        else {
            _lv_xrgb8888_blend_normal_to_rgb888_mix_mask_opa_neon(&asm_dsc);
        }
    }
    else {
        if(src_px_size == 3) {
            _lv_rgb888_blend_normal_to_xrgb8888_mix_mask_opa_neon(&asm_dsc);
        }
        else {
            _lv_xrgb8888_blend_normal_to_xrgb8888_mix_mask_opa_neon(&asm_dsc);
        }
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_rgb888_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_xrgb8888_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_argb8888_blend_normal_to_rgb888_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                  uint32_t dst_px_size)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    if(dst_px_size == 3) {
        _lv_argb8888_blend_normal_to_rgb888_neon(&asm_dsc);
    }
    else {
        _lv_argb8888_blend_normal_to_xrgb8888_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_rgb888_with_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_xrgb8888_with_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_argb8888_blend_normal_to_rgb888_with_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                           uint32_t dst_px_size)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    if(dst_px_size == 3) {
        _lv_argb8888_blend_normal_to_rgb888_with_opa_neon(&asm_dsc);
    }
    else {
        _lv_argb8888_blend_normal_to_xrgb8888_with_opa_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_rgb888_with_mask_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_xrgb8888_with_mask_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_argb8888_blend_normal_to_rgb888_with_mask_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                            uint32_t dst_px_size)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    if(dst_px_size == 3) {
        _lv_argb8888_blend_normal_to_rgb888_with_mask_neon(&asm_dsc);
    }
    else {
        _lv_argb8888_blend_normal_to_xrgb8888_with_mask_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_rgb888_mix_mask_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_xrgb8888_mix_mask_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_argb8888_blend_normal_to_rgb888_mix_mask_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                               uint32_t dst_px_size)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    if(dst_px_size == 3) {
        _lv_argb8888_blend_normal_to_rgb888_mix_mask_opa_neon(&asm_dsc);
    }
    else {
        _lv_argb8888_blend_normal_to_xrgb8888_mix_mask_opa_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_color_blend_to_argb8888_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_color_blend_to_argb8888_neon(lv_draw_sw_blend_fill_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = &dsc->color
    };

    _lv_color_blend_to_argb8888_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_color_blend_to_argb8888_with_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_color_blend_to_argb8888_with_opa_neon(lv_draw_sw_blend_fill_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = &dsc->color
    };
    _lv_color_blend_to_argb8888_with_opa_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_color_blend_to_argb8888_with_mask_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_color_blend_to_argb8888_with_mask_neon(lv_draw_sw_blend_fill_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = &dsc->color,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    _lv_color_blend_to_argb8888_with_mask_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_color_blend_to_argb8888_mix_mask_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_color_blend_to_argb8888_mix_mask_opa_neon(lv_draw_sw_blend_fill_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = &dsc->color,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    _lv_color_blend_to_argb8888_mix_mask_opa_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_argb8888_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb565_blend_normal_to_argb8888_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    _lv_rgb565_blend_normal_to_argb8888_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_argb8888_with_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb565_blend_normal_to_argb8888_with_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    _lv_rgb565_blend_normal_to_argb8888_with_opa_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_argb8888_with_mask_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb565_blend_normal_to_argb8888_with_mask_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    _lv_rgb565_blend_normal_to_argb8888_with_mask_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb565_blend_normal_to_argb8888_mix_mask_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb565_blend_normal_to_argb8888_mix_mask_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    _lv_rgb565_blend_normal_to_argb8888_mix_mask_opa_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_argb8888_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_argb8888_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb888_blend_normal_to_argb8888_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                  uint32_t src_px_size)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    if(src_px_size == 3) {
        _lv_rgb888_blend_normal_to_argb8888_neon(&asm_dsc);
    }
    else {
        _lv_xrgb8888_blend_normal_to_argb8888_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_argb8888_with_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_argb8888_with_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb888_blend_normal_to_argb8888_with_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                           uint32_t src_px_size)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    if(src_px_size == 3) {
        _lv_rgb888_blend_normal_to_argb8888_with_opa_neon(&asm_dsc);
    }
    else {
        _lv_xrgb8888_blend_normal_to_argb8888_with_opa_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_argb8888_with_mask_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_argb8888_with_mask_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb888_blend_normal_to_argb8888_with_mask_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                            uint32_t src_px_size)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    if(src_px_size == 3) {
        _lv_rgb888_blend_normal_to_argb8888_with_mask_neon(&asm_dsc);
    }
    else {
        _lv_xrgb8888_blend_normal_to_argb8888_with_mask_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_rgb888_blend_normal_to_argb8888_mix_mask_opa_neon(asm_dsc_t * dsc);
extern LVGL_HIDDEN void _lv_xrgb8888_blend_normal_to_argb8888_mix_mask_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_rgb888_blend_normal_to_argb8888_mix_mask_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc,
                                                                               uint32_t src_px_size)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    if(src_px_size == 3) {
        _lv_rgb888_blend_normal_to_argb8888_mix_mask_opa_neon(&asm_dsc);
    }
    else {
        _lv_xrgb8888_blend_normal_to_argb8888_mix_mask_opa_neon(&asm_dsc);
    }
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_argb8888_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_argb8888_blend_normal_to_argb8888_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    _lv_argb8888_blend_normal_to_argb8888_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_argb8888_with_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_argb8888_blend_normal_to_argb8888_with_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride
    };
    _lv_argb8888_blend_normal_to_argb8888_with_opa_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_argb8888_with_mask_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_argb8888_blend_normal_to_argb8888_with_mask_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    _lv_argb8888_blend_normal_to_argb8888_with_mask_neon(&asm_dsc);
    return LV_RESULT_OK;
}

extern LVGL_HIDDEN void _lv_argb8888_blend_normal_to_argb8888_mix_mask_opa_neon(asm_dsc_t * dsc);
static inline lv_result_t lv_argb8888_blend_normal_to_argb8888_mix_mask_opa_neon(lv_draw_sw_blend_image_dsc_t * dsc)
{
    asm_dsc_t asm_dsc = {
        .opa = dsc->opa,
        .dst_buf = dsc->dest_buf,
        .dst_w = dsc->dest_w,
        .dst_h = dsc->dest_h,
        .dst_stride = dsc->dest_stride,
        .src_buf = dsc->src_buf,
        .src_stride = dsc->src_stride,
        .mask_buf = dsc->mask_buf,
        .mask_stride = dsc->mask_stride
    };
    _lv_argb8888_blend_normal_to_argb8888_mix_mask_opa_neon(&asm_dsc);
    return LV_RESULT_OK;
}

#endif /* !defined(__ASSEMBLY__) */

/**********************
 *      MACROS
 **********************/

#endif /* #if LV_USE_DRAW_SW_ASM == LV_DRAW_SW_ASM_NEON */

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_BLEND_NEON_H*/
