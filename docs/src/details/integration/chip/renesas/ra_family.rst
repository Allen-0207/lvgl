=========
RA Family
=========

.. |sup2|   unicode:: U+000B2 .. SUPERSCRIPT TWO

.. |img_debug_btn| image:: /_static/images/renesas/debug_btn.png
   :alt: Debug button

Supported boards in the RA Family:

- **EK-RA8D1**
- **EK-RA8P1**
- **EK-RA6M3G**


Run the Project
***************

- The official IDE of Renesas is called e\ |sup2| studio. Because it's Eclipse-based,
  it runs on Windows, Linux, and Mac as well. Members of the RA family require
  certain minimum versions of the Flexible Software Package (FSP). See the individual
  README.md files in the applicable repositories for info. FSPs can be downloaded
  `here <https://www.renesas.com/us/en/software-tool/flexible-software-package-fsp>`__.
  Please notice from FSP version 6.0 and above, LVGL is now part of the middleware section
  of components.  Therefore when cloning the the latest versions of the supported LVGL board
  repositories, recursive updating of the the git submodules is no longer needed.

- JLink is used for debugging, it can be downloaded `here
  <https://www.segger.com/downloads/jlink/>`__.

- Clone the ready-to-use repository for your selected board, for FSP version prior to 6.0:

    .. code-block:: shell

        git clone https://github.com/lvgl/lv_port_renesas_ek-ra8d1.git --recurse-submodules

  Downloading the `.zip` from GitHub doesn't work as it doesn't download the submodules.

- Clone the ready-to-use repository for your selected board, for FSP version from 6.0 and above:

    .. code-block:: shell

        git clone https://github.com/lvgl/lv_port_renesas_ek-ra8d1.git

- Open e\ |sup2| studio, go to ``File`` -> ``Import project`` and select
  ``General`` / ``Existing projects into workspace``.
- Select the cloned folder and press ``Finish``.
- Double-click on ``configuration.xml``. This will activate the `Configuration Window`.

  Renesas' Flexible Software Package (FSP) includes BSP and HAL layer support extended
  with multiple RTOS variants and other middleware stacks.  The components will be
  available via code generation, including the entry point in *"main.c"*.

  Press ``Generate Project Content`` in the top right corner.

  .. image:: /_static/images/renesas/generate.png
     :alt: Code generation with FSP

- Build the project by pressing ``Ctrl`` + ``Alt`` + ``B``
- Click the Debug button (|img_debug_btn|). If prompted with `Debug Configurations`,
  on the `Debugger` tab select the ``J-Link ARM`` as `Debug hardware` and the proper
  IC as `Target Device`:

  - ``R7FA8D1BH`` for EK-RA8D1

    .. image:: /_static/images/renesas/debug_ra8.png
       :alt: Debugger parameters for RA8

  - ``R7FA6M3AH`` for EK-RA6M3G

    .. image:: /_static/images/renesas/debug_ra6.png
       :alt: Debugger parameters for RA6

.. note::

   On EK-RA8D1 boards, the ``SW1`` DIP switch 7 (in the middle of the board) should be
   ON, all others are OFF.
   
   Also note opening a project previously built on top of the FSP prior to v6.0 will trigger
   a dialog asking whether the user wants to migrate to the new FSP v6.0. The migration will 
   not break the project,.


Modify the project
******************


Open a demo
-----------

The entry point of the main task is contained in ``src/LVGL_thread_entry.c``.

You can disable the LVGL demos (or just comment them out) and call some
``lv_example_...()`` functions, or add your own custom code.


Configuration
-------------

``src/lv_conf.h`` (or ``src/lv_conf_user.h``) contains the most important settings for LVGL. Namely:

- :c:macro:`LV_COLOR_DEPTH` to set LVGL's default color depth
- :c:macro:`LV_MEM_SIZE` to set the maximum RAM available to LVGL
- :c:macro:`LV_USE_DAVE2D` to enable the GPU


Hardware and software components can be modified in a visual way using the
``Configuration Window``.

As of e2studio 2025-04.1 and FSP 6.0.0, LVGL is a managed component.



Support
*******

In case of any problems or questions open an issue in the corresponding repository.
