// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐
     * │ A │ B │
     * ├───┼───┤
     * │ C │ D │
     * └───┴───┘
     */
    [0] = LAYOUT_2x2 (
        KC_A,   KC_B,
        KC_C,   KC_D
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =   { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT) }
};
#endif
