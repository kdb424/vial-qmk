// Copyright 2022 Cole Smith <cole@boadsource.xyz>
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
#define DRIVER_LED_TOTAL 70
#define RGB_MATRIX_SPLIT { 35, 35 }
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL

// Fix timeout/boot issues
#define SPLIT_USB_TIMEOUT 5000
#define USB_SUSPEND_WAKEUP_DELAY 5000
#define NO_USB_STARTUP_CHECK
