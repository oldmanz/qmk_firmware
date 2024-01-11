#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _NUM,
    _NAV,
    _SYM,
    _EXT,
    _FUN
};

#define NAV_SPC LT(_NAV, KC_SPC)
#define NUM_SPC LT(_NUM, KC_SPC)
#define SYM_SPC LT(_SYM, KC_SPC)
#define EXT_SPC LT(_EXT, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_ortho_4x12(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,       KC_T,     KC_Y,     KC_U,       KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,       KC_G,     KC_H,     KC_J,       KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,       KC_B,     KC_N,     KC_M,       KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, MO(_FUN),   KC_LGUI, KC_LALT, NAV_SPC, EXT_SPC,  EXT_SPC,  NUM_SPC,    KC_RALT, KC_RGUI, MO(_FUN),   KC_RCTL
    ),
    [_NUM] = LAYOUT_ortho_4x12(
        KC_NO,    KC_NO,    KC_7,    KC_8,    KC_9,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_DEL,
        KC_NO,    KC_NO,    KC_4,    KC_5,    KC_6,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_1,    KC_2,    KC_3,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO
    ),
    [_NAV] = LAYOUT_ortho_4x12(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_HOME,    KC_UP,    KC_END,    KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO, KC_NO
    ),
    [_SYM] = LAYOUT_ortho_4x12(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_HOME,    KC_UP,    KC_END,    KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO, KC_NO
    ),
    [_EXT] = LAYOUT_ortho_4x12(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_HOME,    KC_UP,    KC_END,    KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO, KC_NO
    ),
    [_FUN] = LAYOUT_ortho_4x12(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_HOME,    KC_UP,    KC_END,    KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO, KC_NO
    )
};

// layer_state_t layer_state_set_user(layer_state_t state) {
//     return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

/*
 * ROTARY ENCODER
 */

// #if defined(ENCODER_MAP_ENABLE)
// const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
//     [_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
//     [_LOWER] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI)},
//     [_RAISE] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
//     [_ADJUST] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD)},
// };
// #endif
