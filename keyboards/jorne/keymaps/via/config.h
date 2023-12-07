// Copyright 2021 Joric (@joric)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define OLED_DISPLAY_128X32

#ifdef RGBLIGHT_ENABLE
// #    define RGBLIGHT_EFFECT_BREATHING
// #    define RGBLIGHT_EFFECT_RAINBOW_MOOD
// #    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #    define RGBLIGHT_EFFECT_SNAKE
// #    define RGBLIGHT_EFFECT_KNIGHT
// #    define RGBLIGHT_EFFECT_CHRISTMAS
// #    define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #    define RGBLIGHT_EFFECT_RGB_TEST
// #    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#endif

#define TAPPING_TERM 250
// #define TAPPING_TERM_PER_KEY

#define PERMISSIVE_HOLD
#define PERMISSIVE_HOLD_PER_KEY

#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYER_BLINK

#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_OLED_ENABLE
#define SPLIT_ACTIVITY_ENABLE

#define USB_SUSPEND_WAKEUP_DELAY 500

#define RGBLIGHT_SLEEP  // enable rgblight_suspend() and rgblight_wakeup() in keymap.c
#define RGBLIGHT_TIMEOUT 300000  // ms to wait until rgblight time out, 900K ms is 15min.


// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
// #define SPLIT_USB_DETECT
// #define NO_USB_STARTUP_CHECK
