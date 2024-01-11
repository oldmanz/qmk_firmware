// Copyright 2022 Victor Lucachi (@victorlucachi)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Keyboard Matrix Assignments */
 #define MATRIX_ROW_PINS { B7 , D5, C7, F1 }
 #define MATRIX_COL_PINS { D3, D2, D1, D0, D7, E6, B6, B2, B3, B1, F7, F6}

/* Rotary Encoder Support */
/* #define ENCODERS_PAD_A { B6 } */
/* #define ENCODERS_PAD_B { B2 } */
