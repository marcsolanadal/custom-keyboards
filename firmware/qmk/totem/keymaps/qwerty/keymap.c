#include QMK_KEYBOARD_H

enum totem_layers {
    _QWERTY,
    _LOWER,
    _UPPER,
    _ADJUST
};

// Layer-tap definitions
#define LOWER   MO(_LOWER)
#define UPPER   MO(_UPPER)
#define ADJUST  MO(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(
        // Top row (10 keys)
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,

        // Home row (10 keys)
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,

        // Bottom row (12 keys)
        KC_TAB,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSPC,

        // Thumb cluster (6 keys)
        KC_LCTL, KC_LALT, KC_SPC,  KC_ENT,  UPPER,   LOWER
    ),

    [_LOWER] = LAYOUT(
        // Numbers and symbols
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,

        // Function keys
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,

        // Special symbols
        KC_ESC,  KC_F11,  KC_F12,  KC_LBRC, KC_RBRC, KC_BSLS, KC_MINS, KC_EQL,  KC_GRV,  KC_QUOT, KC_TRNS, KC_DEL,

        // Thumb cluster
        KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, ADJUST,  KC_TRNS
    ),

    [_UPPER] = LAYOUT(
        // Shifted symbols
        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,

        // Navigation
        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_TRNS, KC_TRNS,

        // More symbols
        KC_CAPS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_PIPE, KC_UNDS, KC_PLUS, KC_TILD, KC_DQUO, KC_TRNS, KC_TRNS,

        // Thumb cluster
        KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ADJUST
    ),

    [_ADJUST] = LAYOUT(
        // Media and system
        KC_MUTE, KC_VOLD, KC_VOLU, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,

        // RGB (if enabled) or other features
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

        // Bottom row
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

        // Thumb cluster
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
