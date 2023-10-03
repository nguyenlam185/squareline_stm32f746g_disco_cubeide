/**
 * @file lv_draw_sdl_priv.h
 *
 */

#ifndef LV_DRAW_SDL_PRIV_H
#define LV_DRAW_SDL_PRIV_H


#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../../../../../lgvl_port/lvgl/src/lv_conf_internal.h"

#if LV_USE_GPU_SDL

#include LV_GPU_SDL_INCLUDE_PATH

#include "../../../../../lgvl_port/lvgl/src/draw/lv_draw.h"
#include "../../../../../lgvl_port/lvgl/src/misc/lv_lru.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

typedef struct lv_draw_sdl_context_internals_t {
    lv_lru_t * texture_cache;
    SDL_Texture * mask;
    SDL_Texture * composition;
} lv_draw_sdl_context_internals_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*======================
 * Add/remove functions
 *=====================*/

/*=====================
 * Setter functions
 *====================*/

/*=====================
 * Getter functions
 *====================*/

/*=====================
 * Other functions
 *====================*/

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_GPU_SDL*/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_DRAW_SDL_PRIV_H*/
