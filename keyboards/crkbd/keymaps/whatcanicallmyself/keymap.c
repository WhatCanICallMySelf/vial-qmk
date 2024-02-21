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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_split_3x6_3(

              KC_NO,                KC_Q,                KC_W,                KC_E,                KC_R,                KC_T,                 KC_Y,                KC_U,                KC_I,                KC_O,             KC_SCLN,             KC_LBRC,
              KC_NO,        LGUI_T(KC_A),        LALT_T(KC_S),        LCTL_T(KC_D),        LSFT_T(KC_F),                KC_G,                 KC_H,        LSFT_T(KC_J),        LCTL_T(KC_K),        LALT_T(KC_L),        LGUI_T(KC_P),            KC_QUOTE,
              KC_NO,                KC_Z,                KC_X,                KC_C,                KC_V,                KC_B,                 KC_N,                KC_M,            KC_COMMA,              KC_DOT,            KC_SLASH,               KC_NO,
                                                                   LT(1,KC_ESCAPE),      LT(2,KC_SPACE),        LT(3,KC_TAB),       LT(4,KC_ENTER),       LT(5,KC_BSPC),     LT(6,KC_DELETE)
),
[1] = LAYOUT_split_3x6_3(

              KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,              RGB_MOD,             RGB_SPI,             RGB_HUI,             RGB_SAI,             RGB_VAI,               KC_NO,
              KC_NO,             KC_LGUI,             KC_LALT,             KC_LCTL,             KC_LSFT,               KC_NO,              RGB_TOG,             KC_MPRV,             KC_VOLD,             KC_VOLU,             KC_MNXT,               KC_NO,
              KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,             RGB_RMOD,             RGB_SPD,             RGB_HUD,             RGB_SAD,             RGB_VAD,               KC_NO,
                                                                           KC_TRNS,               KC_NO,               KC_NO,              KC_MSTP,             KC_MPLY,             KC_MUTE
),
[2] = LAYOUT_split_3x6_3(

              KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,              KC_PSTE,             KC_COPY,             KC_UNDO,             KC_AGIN,              KC_CUT,               KC_NO,
              KC_NO,             KC_LGUI,             KC_LALT,             KC_LCTL,             KC_LSFT,               KC_NO,              KC_CAPS,             KC_LEFT,             KC_DOWN,               KC_UP,            KC_RIGHT,               KC_NO,
              KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,            KC_INSERT,             KC_HOME,             KC_PGDN,             KC_PGUP,              KC_END,               KC_NO,
                                                                             KC_NO,             KC_TRNS,               KC_NO,             KC_ENTER,             KC_BSPC,           KC_DELETE
),
[3] = LAYOUT_split_3x6_3(

              KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,                KC_NO,               KC_NO,             KC_BTN4,             KC_BTN5,               KC_NO,               KC_NO,
              KC_NO,             KC_LGUI,             KC_LALT,             KC_LCTL,             KC_LSFT,               KC_NO,                KC_NO,             KC_MS_L,             KC_MS_D,             KC_MS_U,             KC_MS_R,               KC_NO,
              KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,                KC_NO,             KC_WH_L,             KC_WH_D,             KC_WH_U,             KC_WH_R,               KC_NO,
                                                                             KC_NO,               KC_NO,             KC_TRNS,              KC_BTN2,             KC_BTN1,             KC_BTN3
),
[4] = LAYOUT_split_3x6_3(

              KC_NO,          LSFT(KC_3),      RALT(KC_EQUAL),          RALT(KC_7),          RALT(KC_0),            KC_EQUAL,                KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,
              KC_NO,          LSFT(KC_7),          LSFT(KC_2),          LSFT(KC_8),          LSFT(KC_9),            KC_GRAVE,                KC_NO,             KC_LSFT,             KC_LCTL,             KC_LALT,             KC_LGUI,               KC_NO,
              KC_NO,       RALT(KC_RBRC),             KC_BSLS,          RALT(KC_8),          RALT(KC_9),          LSFT(KC_6),                KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,
                                                               LSFT(KC_NONUS_HASH),          LSFT(KC_0),      LSFT(KC_MINUS),              KC_TRNS,               KC_NO,               KC_NO
),
[5] = LAYOUT_split_3x6_3(

              KC_NO,          LSFT(KC_1),                KC_7,                KC_8,                KC_9,          LSFT(KC_5),                KC_NO,               KC_NO,        RCTL(KC_F22),               KC_NO,               KC_NO,               KC_NO,
              KC_NO,             KC_NUBS,                KC_4,                KC_5,                KC_6,          RALT(KC_2),                KC_NO,             KC_LSFT,             KC_LCTL,             KC_LALT,             KC_LGUI,               KC_NO,
              KC_NO,       LSFT(KC_NUBS),                KC_1,                KC_2,                KC_3,          RALT(KC_4),                KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,
                                                                          KC_SLASH,                KC_0,            KC_MINUS,                KC_NO,             KC_TRNS,               KC_NO
),
[6] = LAYOUT_split_3x6_3(

              KC_NO,              KC_F12,               KC_F7,               KC_F8,               KC_F9,               KC_NO,                KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               TG(7),
              KC_NO,              KC_F11,               KC_F4,               KC_F5,               KC_F6,               KC_NO,                KC_NO,             KC_LSFT,             KC_LCTL,             KC_LALT,             KC_LGUI,               TG(8),
              KC_NO,              KC_F10,               KC_F1,               KC_F2,               KC_F3,               KC_NO,                KC_NO,               KC_NO,               KC_NO,               KC_NO,              TG(10),               TG(9),
                                                                         KC_ESCAPE,            KC_SPACE,              KC_TAB,                KC_NO,               KC_NO,             KC_TRNS
),
[7] = LAYOUT_split_3x6_3(

              TG(7),                KC_Q,                KC_W,                KC_E,                KC_R,                KC_T,                 KC_Y,                KC_U,                KC_I,                KC_O,             KC_SCLN,             KC_LBRC,
              KC_NO,                KC_A,                KC_S,                KC_D,                KC_F,                KC_G,                 KC_H,                KC_J,                KC_K,                KC_L,                KC_P,            KC_QUOTE,
              KC_NO,                KC_Z,                KC_X,                KC_C,                KC_V,                KC_B,                 KC_N,                KC_M,            KC_COMMA,              KC_DOT,            KC_SLASH,               KC_NO,
                                                                         KC_ESCAPE,            KC_SPACE,              KC_TAB,             KC_ENTER,             KC_BSPC,           KC_DELETE
),
[8] = LAYOUT_split_3x6_3(

              TG(8),               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,                KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               TG(8),
              KC_NO,               KC_NO,               KC_NO,                KC_S,                KC_D,               KC_NO,                KC_NO,                KC_K,                KC_L,               KC_NO,               KC_NO,               KC_NO,
              KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,                KC_NO,               KC_NO,               KC_NO,               KC_NO,             KC_DOWN,               KC_UP,
                                                                         KC_ESCAPE,               KC_NO,            KC_SPACE,                 KC_Q,               KC_NO,            KC_ENTER
),
[9] = LAYOUT_split_3x6_3(

          KC_ESCAPE,                KC_Q,                KC_W,                KC_E,                KC_R,                KC_1,                KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               TG(9),
              KC_NO,                KC_A,                KC_S,                KC_D,                KC_F,                KC_2,                KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,
            KC_LSFT,                KC_Z,                KC_X,                KC_C,                KC_V,                KC_3,                KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,
                                                                           KC_LCTL,            KC_SPACE,                KC_9,                KC_NO,               KC_NO,               KC_NO
),
[10] = LAYOUT_split_3x6_3(

             TG(10),             KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,              KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,              TG(10),
            KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,              KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,
            KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,              KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,             KC_TRNS,
                                                                           KC_TRNS,             KC_TRNS,             KC_TRNS,              KC_TRNS,             KC_TRNS,             KC_TRNS
)

};

#ifdef OLED_ENABLE
#include <stdio.h>

//const char *read_logo(void);
const char *read_keylog(void);
const char *render_layer_state_image(void);

void set_keylog(uint16_t keycode, keyrecord_t *record);


oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_layer_state_image();
        //oled_write(read_keylog(), false);
    } else {
        //render_layer_state_image();
        //oled_write(read_logo(), false);
        //oled_write(read_keylog(), false);
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_ENABLE
