/**
 * @file lvgl.h
 * Include all LVGL related headers
 */

#ifndef LVGL_H
#define LVGL_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************
 * CURRENT VERSION OF LVGL
 ***************************/
#define LVGL_VERSION_MAJOR 8
#define LVGL_VERSION_MINOR 3
#define LVGL_VERSION_PATCH 0
#define LVGL_VERSION_INFO "dev"

/*********************
 *      INCLUDES
 *********************/

#include "../../lgvl_port/lvgl/src/misc/lv_log.h"
#include "../../lgvl_port/lvgl/src/misc/lv_timer.h"
#include "../../lgvl_port/lvgl/src/misc/lv_math.h"
#include "../../lgvl_port/lvgl/src/misc/lv_mem.h"
#include "../../lgvl_port/lvgl/src/misc/lv_async.h"
#include "../../lgvl_port/lvgl/src/misc/lv_anim_timeline.h"
#include "../../lgvl_port/lvgl/src/misc/lv_printf.h"

#include "../../lgvl_port/lvgl/src/hal/lv_hal.h"

#include "../../lgvl_port/lvgl/src/core/lv_obj.h"
#include "../../lgvl_port/lvgl/src/core/lv_group.h"
#include "../../lgvl_port/lvgl/src/core/lv_indev.h"
#include "../../lgvl_port/lvgl/src/core/lv_refr.h"
#include "../../lgvl_port/lvgl/src/core/lv_disp.h"
#include "../../lgvl_port/lvgl/src/core/lv_theme.h"

#include "../../lgvl_port/lvgl/src/font/lv_font.h"
#include "../../lgvl_port/lvgl/src/font/lv_font_loader.h"
#include "../../lgvl_port/lvgl/src/font/lv_font_fmt_txt.h"

#include "../../lgvl_port/lvgl/src/widgets/lv_arc.h"
#include "../../lgvl_port/lvgl/src/widgets/lv_btn.h"
#include "../../lgvl_port/lvgl/src/widgets/lv_img.h"
#include "../../lgvl_port/lvgl/src/widgets/lv_label.h"
#include "../../lgvl_port/lvgl/src/widgets/lv_line.h"
#include "../../lgvl_port/lvgl/src/widgets/lv_table.h"
#include "../../lgvl_port/lvgl/src/widgets/lv_checkbox.h"
#include "../../lgvl_port/lvgl/src/widgets/lv_bar.h"
#include "../../lgvl_port/lvgl/src/widgets/lv_slider.h"
#include "../../lgvl_port/lvgl/src/widgets/lv_btnmatrix.h"
#include "../../lgvl_port/lvgl/src/widgets/lv_dropdown.h"
#include "../../lgvl_port/lvgl/src/widgets/lv_roller.h"
#include "../../lgvl_port/lvgl/src/widgets/lv_textarea.h"
#include "../../lgvl_port/lvgl/src/widgets/lv_canvas.h"
#include "../../lgvl_port/lvgl/src/widgets/lv_switch.h"

#include "../../lgvl_port/lvgl/src/draw/lv_draw.h"

#include "../../lgvl_port/lvgl/src/lv_api_map.h"

/*-----------------
 * EXTRAS
 *----------------*/
#include "../../lgvl_port/lvgl/src/extra/lv_extra.h"
#include "../../lgvl_port/lvgl/src/extra/widgets/lv_widgets.h"
#include "../../lgvl_port/lvgl/src/extra/layouts/lv_layouts.h"
#include "../../lgvl_port/lvgl/src/extra/themes/lv_themes.h"
#include "../../lgvl_port/lvgl/src/extra/others/lv_others.h"
#include "../../lgvl_port/lvgl/src/extra/libs/lv_libs.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**********************
 *      MACROS
 **********************/

/** Gives 1 if the x.y.z version is supported in the current version
 * Usage:
 *
 * - Require v6
 * #if LV_VERSION_CHECK(6,0,0)
 *   new_func_in_v6();
 * #endif
 *
 *
 * - Require at least v5.3
 * #if LV_VERSION_CHECK(5,3,0)
 *   new_feature_from_v5_3();
 * #endif
 *
 *
 * - Require v5.3.2 bugfixes
 * #if LV_VERSION_CHECK(5,3,2)
 *   bugfix_in_v5_3_2();
 * #endif
 *
 */
#define LV_VERSION_CHECK(x,y,z) (x == LVGL_VERSION_MAJOR && (y < LVGL_VERSION_MINOR || (y == LVGL_VERSION_MINOR && z <= LVGL_VERSION_PATCH)))

/**
 * Wrapper functions for VERSION macros
 */

static inline int lv_version_major(void)
{
    return LVGL_VERSION_MAJOR;
}

static inline int lv_version_minor(void)
{
    return LVGL_VERSION_MINOR;
}

static inline int lv_version_patch(void)
{
    return LVGL_VERSION_PATCH;
}

static inline const char *lv_version_info(void)
{
    return LVGL_VERSION_INFO;
}

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LVGL_H*/
