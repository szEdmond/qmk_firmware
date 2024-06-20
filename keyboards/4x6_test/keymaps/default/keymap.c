// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_P0,   KC_P0,   KC_P0,   KC_P,    KC_Y,     KC_F,
        KC_P0,   KC_A,    KC_O,    KC_E,    KC_U,     KC_I,
        KC_P0,   KC_P0,   KC_Q,    KC_J,    KC_K,     KC_X,
        KC_LCTL, KC_LSFT,  KC_BSPC
    )
};