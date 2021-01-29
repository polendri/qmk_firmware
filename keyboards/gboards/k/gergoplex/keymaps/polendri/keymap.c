#include QMK_KEYBOARD_H

#define BASE 0 // Default layer
#define SYMB 1 // Symbols
#define NUMB 2 // Numbers/motion

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------.      ,--------------------------------.
 * |   "    |  <  |  >  |  P  |  Y  |      |  F  |  G  |  C  |  R  |   L    |
 * |--------+-----+-----+-----+-----|      |-----+-----+-----+-----+--------|
 * | SHFT/A |  O  |  E  |  U  |  I  |      |  D  |  H  |  T  |  N  | SHFT/S |
 * |--------+-----+-----+-----+-----|      |-----+-----+-----+-----+--------|
 * | CTRL/: |  Q  |  J  |  K  |  X  |      |  B  |  M  |  W  |  V  | CTRL/Z |
 * `--------+-----+-----+-----+-----'      `-----+-----+-----+-----+--------'
 * ,--------------------------------.    ,-----------------------.
 * | ESC/META | ENT/ALT | CLCK(SYM) |    | SPC(NUM) | BSPC | TAB |
 * `----------+---------+-----------'    `----------+------+-----'
 */
[BASE] = LAYOUT_gergoplex(
    KC_QUOT,               KC_COMM, KC_DOT, KC_P, KC_Y,     KC_F, KC_G, KC_C, KC_R, KC_L, 
    MT(MOD_LSFT, KC_A),    KC_O,    KC_E,   KC_U, KC_I,     KC_D, KC_H, KC_T, KC_N, MT(MOD_RSFT, KC_S),
    MT(MOD_LCTL, KC_SCLN), KC_Q,    KC_J,   KC_K, KC_X,     KC_B, KC_M, KC_W, KC_V, MT(MOD_RCTL, KC_Z),
    MT(MOD_LGUI, KC_ESC), MT(MOD_LALT, KC_ENT), LT(SYMB, KC_CLCK),
    LT(NUMB, KC_SPC),     KC_BSPC,                KC_TAB
    ),

/* Keymap 1: Symbols layer
 * ,-----------------------------.      ,-----------------------------.
 * |  !  |  @  |  #  |  $  |  %  |      |  ^  |  &  |  *  |  (  |  )  |
 * |-----+-----+-----+-----+-----|      |-----+-----+-----+-----+-----|
 * |  `  |  -  |  +  |     |     |      |     |  ?  |  /  |  [  |  ]  |
 * |-----+-----+-----+-----+-----|      |-----+-----+-----+-----+-----|
 * |  ~  |  _  |  =  |     |     |      |     |  |  |  \  |  {  |  }  |
 * `-----+-----+-----+-----+-----'      `-----------------------------'
 *              ,-----------------.    ,------------------.
 *              |     |     |     |    |     |     |      |
 *              `-----------------'    `------------------' 
 */
[SYMB] = LAYOUT_gergoplex(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_GRV,  KC_MINS, KC_PLUS, KC_NO,   KC_NO,       KC_NO,   KC_QUES, KC_SLSH, KC_LBRC, KC_RBRC,
    KC_TILD, KC_UNDS, KC_EQL,  KC_NO,   KC_NO,       KC_NO,   KC_PIPE, KC_BSLS, KC_LCBR, KC_RCBR,
                      KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO
    ),

/* Keymap 2: Number/Function layer
 * ,-------------------------------.      ,------------------------------.
 * |   1   |  2  |  3  |  4  |  5  |      |  6  |  7  |  8  |  9  |   0   |
 * |-------+-----+-----+-----+-----|      |-------------------------------|
 * |  F1   | F2  | F3  | F4  | F5  |      | LFT | DWN | UP  | RGT | VOLUP | 
 * |-------+-----+-----+-----+-----|      |-------------------------------|
 * |  F6   | F7  | F8  | F9  | F10 |      |HOME |PGDN |PGUP | END | VOLDN |
 * `-------+-----+-----+-----+-----'      `-------------------------------'
 *              ,-----------------.      ,-----------------.
 *              | F11 | F12 |     |      |     | PLY | SKP |
 *              `-----------------'      `-----------------'
 */
[NUMB] = LAYOUT_gergoplex(
    KC_1,  KC_2,  KC_3,    KC_4,   KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_F1, KC_F2, KC_F3,   KC_F4,  KC_F5,      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_VOLU,
    KC_F6, KC_F7, KC_F8,   KC_F9,  KC_F10,     KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_VOLD,
                  KC_F11,  KC_F12, KC_NO,      KC_NO,   KC_MPLY, KC_MNXT
    )
};
