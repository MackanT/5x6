/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define PRODUCT_ID 0x0001
#define DEVICE_VER 0x0002 // Test
#define PRODUCT Dactyl - Manuform(aire) // Gray Keyboard
// #define USE_SERIAL
#define USE_I2C
#define SPLIT_HAND_PIN F5

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// Gray Keyboard
// wiring of left half
#define MATRIX_ROW_PINS \
    { D4, C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS \
    { B6, B2, B3, B1, F7, F6 }

// Orange Keyboard
// // wiring of left half
// #define MATRIX_COL_PINS \
//     { B5, B4, E6, D7, C6, D4 }
// #define MATRIX_ROW_PINS \
//     { F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION COL2ROW

// ms allowed for a tap-dance command
#define TAPPING_TERM 200

#ifdef JOYSTICK_ENABLE
  #define JOYSTICK_BUTTON_COUNT 0
  #define JOYSTICK_AXES_COUNT 2
  #define JOYSTICK_AXES_RESOLUTION 10
#endif
