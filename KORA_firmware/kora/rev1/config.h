/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#define SOFT_SERIAL_PIN D2

/* ws2812 RGB LED */
#define RGB_DI_PIN      B5

#ifdef RGBLIGHT_ENABLE
#    define RGBLED_NUM 14 // Number of LEDs
#    define RGBLED_SPLIT \
        { 7, 7 }
#    define RGBLIGHT_SPLIT
#endif

#ifdef RGB_MATRIX_ENABLE
#    define RGBLED_NUM       14 // Number of LEDs
#    define RGB_MATRIX_LED_COUNT RGBLED_NUM
#    define RGB_MATRIX_SPLIT \
        { 7, 7 }
#    define SPLIT_TRANSPORT_MIRROR
#endif

#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }
#define ENCODERS_PAD_A_RIGHT { F5 }
#define ENCODERS_PAD_B_RIGHT { F4 }

#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X64
#    define SPLIT_OLED_ENABLE
#endif
