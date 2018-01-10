/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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
#include "whitefox.h"

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,---------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspc|Ins|
     * |---------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|     |Del|
     * |------------------------------------------------------Enter----|
     * |CapsLo|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  #|    |PgU|
     * |---------------------------------------------------------------|
     * |Shift| \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |PgD|
     * |---------------------------------------------------------------|
     * |Ctrl|Gui |Alt |         Space        |Fn0 |Alt |Gui|Lef|Dow|Rig|
     * `---------------------------------------------------------------'
     */
  [0] = KEYMAP_ISO(
      KC_FN8,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_BSPC,KC_GRV,\
      KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_RBRC,KC_DEL,\
      KC_LCTL,KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_FN3,KC_QUOT,KC_NUHS,KC_ENT,KC_PGUP,\
      KC_LSFT,KC_FN2,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_RSFT,KC_UP,KC_PGDN,\
      KC_FN1,KC_LGUI,KC_LALT,KC_SPC,KC_RALT,KC_RGUI,KC_FN1,KC_LEFT,KC_DOWN,KC_RGHT),
  [1] = KEYMAP_ISO(
      KC_FN8,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_BSPC,KC_CAPS,\
      KC_TAB,KC_DEL,KC_TRNS,KC_UP,KC_PSCR,KC_BRK,KC_TRNS,KC_PSCR,KC_UP,KC_TRNS,KC_DEL,KC_TRNS,KC_TRNS,KC_INS,\
      KC_LCTL,KC_TRNS,KC_LEFT,KC_DOWN,KC_RGHT,KC_TRNS,KC_TRNS,KC_LEFT,KC_DOWN,KC_RGHT,KC_FN3,KC_INS,KC_SLCK,KC_ENT,KC_HOME,\
      KC_LSFT,KC_FN2,KC_HOME,KC_PGUP,KC_PGDN,KC_END,KC_TRNS,KC_TRNS,KC_HOME,KC_PGUP,KC_PGDN,KC_END,KC_RSFT,KC_UP,KC_END,\
      KC_FN1,KC_LGUI,KC_LALT,KC_BSPC,KC_RALT,KC_RGUI,KC_FN1,KC_LEFT,KC_DOWN,KC_RGHT),
  [2] = KEYMAP_ISO(
      KC_FN8,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_BSPC,KC_NLCK,\
      KC_TAB,BL_TOGG,BL_STEP,BL_ON,BL_OFF,BL_INC,BL_DEC,KC_P7,KC_P8,KC_P9,KC_PSLS,KC_TRNS,KC_TRNS,KC_DEL,\
      KC_LCTL,KC_EQL,KC_DEL,KC_PENT,KC_TAB,KC_FN6,KC_TRNS,KC_P4,KC_P5,KC_P6,KC_FN3,KC_TRNS,KC_NLCK,KC_TRNS,KC_PGUP,\
      KC_LSFT,KC_FN2,KC_TRNS,KC_TRNS,KC_TRNS,KC_FN7,KC_PDOT,KC_P0,KC_P1,KC_P2,KC_P3,KC_PDOT,KC_RSFT,KC_UP,KC_PGDN,\
      KC_FN1,KC_LGUI,KC_LALT,KC_BSPC,KC_RALT,KC_RGUI,KC_FN1,KC_LEFT,KC_DOWN,KC_RGHT),
  [3] = KEYMAP_ISO(
      KC_FN8,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_BSPC,KC_GRV,\
      KC_TAB,KC_TRNS,KC_BTN4,KC_WH_U,KC_BTN5,KC_TRNS,KC_TRNS,KC_TRNS,KC_MS_U,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_DEL,\
      KC_LCTL,KC_TRNS,KC_BTN2,KC_BTN3,KC_BTN1,KC_TRNS,KC_TRNS,KC_MS_L,KC_MS_D,KC_MS_R,KC_FN3,KC_TRNS,KC_TRNS,KC_TRNS,KC_PGUP,\
      KC_LSFT,KC_FN2,KC_TRNS,KC_TRNS,KC_WH_D,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_RSFT,KC_UP,KC_PGDN,\
      KC_FN1,KC_LGUI,KC_LALT,KC_SPC,KC_RALT,KC_RGUI,KC_FN1,KC_LEFT,KC_DOWN,KC_RGHT),
  [4] = KEYMAP_ISO(
      KC_FN8,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_VOLD,KC_VOLU,KC_PWR,KC_NO,\
      KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_MPLY,KC_MPRV,KC_MNXT,KC_NO,\
      KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,\
      KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,\
      KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO),

};

/* Give numbers some descriptive names */
#define ACTION_LEDS_ALL 1
#define ACTION_LEDS_GAME 2

const uint16_t fn_actions[] = {
  [1] = ACTION_LAYER_MOMENTARY(1),
  [2] = ACTION_LAYER_TAP_KEY(2, KC_NUBS),
  [3] = ACTION_LAYER_TAP_KEY(3, KC_SCLN),
  [4] = ACTION_MODS_ONESHOT(MOD_LSFT),
  [5] = ACTION_MODS_ONESHOT(MOD_RSFT),
  [6] = ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),
  [7] = ACTION_MODS_KEY(MOD_LSFT, KC_TAB),
  [8] = ACTION_LAYER_TAP_KEY(4, KC_ESC),
};

/* custom action function */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  /*
     (void)opt;
     switch(id) {
     case ACTION_LEDS_ALL:
     if(record->event.pressed) {
  // signal the LED controller thread
  chMBPost(&led_mailbox, LED_MSG_GAME_TOGGLE, TIME_IMMEDIATE);
  }
  break;
  case ACTION_LEDS_GAME:
  if(record->event.pressed) {
  // signal the LED controller thread
  chMBPost(&led_mailbox, LED_MSG_ALL_TOGGLE, TIME_IMMEDIATE);
  }
  break;
  }
  */
}
