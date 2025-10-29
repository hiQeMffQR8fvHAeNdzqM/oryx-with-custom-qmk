#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
  ST_MACRO_29,
};



enum tap_dance_codes {
  DANCE_0,
};

#define DUAL_FUNC_0 LT(11, KC_5)
#define DUAL_FUNC_1 LT(13, KC_5)
#define DUAL_FUNC_2 LT(9, KC_F11)
#define DUAL_FUNC_3 LT(10, KC_5)
#define DUAL_FUNC_4 LT(7, KC_K)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_NO,          KC_NO,          KC_NO,          DUAL_FUNC_0,    DUAL_FUNC_1,                                    KC_ENTER,       KC_CAPS,        KC_NO,          KC_NO,          OSL(6),         OSL(7),         
    DUAL_FUNC_2,    KC_B,           KC_F,           KC_L,           KC_K,           KC_Q,                                           KC_P,           KC_G,           KC_O,           KC_U,           KC_QUES,        KC_NO,          
    DUAL_FUNC_3,    KC_N,           KC_S,           KC_H,           KC_T,           KC_M,                                           KC_Y,           KC_C,           KC_A,           KC_E,           KC_I,           KC_NO,          
    TD(DANCE_0),    KC_X,           KC_V,           KC_J,           KC_D,           KC_Z,                                           KC_DOT,         KC_W,           KC_COMMA,       KC_QUOTE,       KC_SCLN,        OSL(5),         
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [1] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LCTL(LSFT(KC_UP)),KC_HOME,        KC_UP,          KC_END,         KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LCTL(LSFT(KC_DOWN)),KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          OSM(MOD_RSFT),  OSM(MOD_RCTL),  OSM(MOD_RALT),  OSM(MOD_RGUI),  KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_TAB,         KC_SPACE
  ),
  [2] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_SLASH,       KC_NO,          KC_NO,          KC_NO,                                          ST_MACRO_0,     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  KC_NO,                                          KC_NO,          KC_COLN,        KC_AT,          KC_EXLM,        KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_DQUO,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [3] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_KP_MINUS,    KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_KP_PLUS,     KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_ASTERISK, KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          ST_MACRO_1,     KC_NO,                                          DUAL_FUNC_4,    KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_EQUAL,       KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_KP_0
  ),
  [4] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_BSLS,        KC_SLASH,       KC_LABK,        KC_KP_ASTERISK, KC_NO,                                          KC_KP_PLUS,     KC_RABK,        KC_NO,          KC_UNDS,        KC_NO,          KC_NO,          
    KC_NO,          KC_HASH,        ST_MACRO_2,     KC_CIRC,        KC_TILD,        KC_MINUS,                                       KC_NO,          ST_MACRO_3,     KC_AMPR,        KC_EQUAL,       KC_PIPE,        KC_NO,          
    KC_NO,          KC_NO,          KC_GRAVE,       KC_NO,          KC_DLR,         KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_PERC,        KC_NO,                                          KC_NO,          KC_NO
  ),
  [5] = LAYOUT_voyager(
    TO(0),          LCTL(RSFT(KC_P)),KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          RGUI(RSFT(KC_S)),KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    QK_BOOT,        KC_NO,                                          KC_NO,          KC_NO
  ),
  [6] = LAYOUT_voyager(
    TO(0),          ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     ST_MACRO_7,     KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          ST_MACRO_8,     KC_NO,          KC_NO,          OSL(7),                                         ST_MACRO_11,    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          ST_MACRO_9,     RGUI(RSFT(KC_S)),KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          ST_MACRO_12,    ST_MACRO_13,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          ST_MACRO_10,    KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [7] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          ST_MACRO_21,    KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,    KC_NO,          KC_NO,                                          ST_MACRO_22,    ST_MACRO_23,    ST_MACRO_24,    ST_MACRO_25,    KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          ST_MACRO_17,    ST_MACRO_18,    ST_MACRO_19,                                    KC_NO,          ST_MACRO_26,    ST_MACRO_27,    ST_MACRO_28,    ST_MACRO_29,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    ST_MACRO_20,    KC_NO,                                          KC_NO,          KC_NO
  ),
};



uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_N:
            return TAPPING_TERM + 75;
        case KC_I:
            return TAPPING_TERM + 75;
        default:
            return TAPPING_TERM;
    }
}

bool capslock_active = false;

bool led_update_user(led_t led_state) {
  capslock_active = led_state.caps_lock;
  return true;
}

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {86,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,255}, {202,255,211}, {215,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {202,255,211}, {202,255,211}, {202,255,211}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {156,147,237}, {156,147,237}, {156,147,237}, {0,0,0}, {0,0,0}, {0,0,0}, {156,147,237}, {156,147,237}, {156,147,237}, {0,0,0}, {0,0,0}, {0,0,0}, {156,147,237}, {0,0,0}, {156,147,237}, {0,0,0}, {0,0,0}, {0,0,0}, {156,147,237} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  if (capslock_active && biton32(layer_state) == 0) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 0, 255, 255 });
    rgb_matrix_set_color( 27, rgb.r, rgb.g, rgb.b );
  } 
  return true;
}



typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: register_code16(RCTL(KC_V)); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_V)); break;
        case DOUBLE_HOLD: register_code16(RCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(RCTL(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_V)); break;
        case DOUBLE_HOLD: unregister_code16(RCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_9))SS_DELAY(100)  SS_LSFT(SS_TAP(X_0))SS_DELAY(100)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_0) SS_TAP(X_1) SS_TAP(X_7) SS_TAP(X_6) ));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRC)SS_DELAY(100)  SS_TAP(X_RBRC)SS_DELAY(100)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_LBRC))SS_DELAY(100)  SS_LSFT(SS_TAP(X_RBRC))SS_DELAY(100)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_2))SS_DELAY(100)  SS_LSFT(SS_TAP(X_P))SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_G)SS_DELAY(100)  SS_LSFT(SS_TAP(X_L))SS_DELAY(100)  SS_LSFT(SS_TAP(X_T))SS_DELAY(100)  SS_TAP(X_4)SS_DELAY(100)  SS_TAP(X_9)SS_DELAY(100)  SS_LSFT(SS_TAP(X_1))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_DELETE)))SS_DELAY(100)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_TAB)SS_DELAY(100)  SS_LSFT(SS_TAP(X_I))SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_V)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_LSFT(SS_TAP(X_A))SS_DELAY(100)  SS_TAP(X_KP_PLUS)SS_DELAY(100)  SS_RSFT(SS_TAP(X_F))SS_DELAY(100)  SS_LSFT(SS_TAP(X_C))SS_DELAY(100)  SS_LSFT(SS_TAP(X_U))SS_DELAY(100)  SS_RSFT(SS_TAP(X_1))SS_DELAY(100)  SS_RSFT(SS_TAP(X_1))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_TAP(X_1))SS_DELAY(1000)  SS_TAP(X_TAB)SS_DELAY(100)  SS_TAP(X_TAB)SS_DELAY(100)  SS_TAP(X_TAB)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_TAB)SS_DELAY(100)  SS_TAP(X_1)SS_DELAY(100)  SS_TAP(X_6)SS_DELAY(100)  SS_TAP(X_9)SS_DELAY(100)  SS_TAP(X_0));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_RSFT(SS_TAP(X_9))SS_DELAY(100)  SS_RSFT(SS_TAP(X_0))SS_DELAY(100)  SS_LCTL(SS_TAP(X_LEFT))SS_DELAY(100)  SS_LCTL(SS_TAP(X_LEFT))SS_DELAY(100)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE)SS_DELAY(1)  SS_TAP(X_MINUS)SS_DELAY(1)  SS_TAP(X_MINUS)SS_DELAY(1)  SS_TAP(X_SLASH)SS_DELAY(1)  SS_TAP(X_MINUS)SS_DELAY(1)  SS_TAP(X_MINUS)SS_DELAY(1)  SS_TAP(X_SLASH)SS_DELAY(1)  SS_TAP(X_MINUS)SS_DELAY(1)  SS_TAP(X_MINUS)SS_DELAY(1)  SS_TAP(X_QUOTE));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_END)SS_DELAY(100)  SS_TAP(X_ENTER)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_ENTER)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_ENTER)SS_DELAY(100)  SS_TAP(X_BSPC)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_LEFT)SS_DELAY(100)  SS_TAP(X_UP));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOWN)SS_DELAY(100)  SS_TAP(X_END)SS_DELAY(100)  SS_TAP(X_ENTER)SS_DELAY(100)  SS_TAP(X_BSPC)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_RSFT(SS_TAP(X_9))SS_DELAY(100)  SS_RSFT(SS_TAP(X_0))SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_LCTL(SS_TAP(X_LEFT))SS_DELAY(100)  SS_TAP(X_LEFT)SS_DELAY(100)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_ALT)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_B));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_HOME))SS_DELAY(100)  SS_TAP(X_DOWN)SS_DELAY(100)  SS_TAP(X_RIGHT)SS_DELAY(100)  SS_LSFT(SS_TAP(X_END))SS_DELAY(100)  SS_LCTL(SS_TAP(X_C)));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_ALT)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_L));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_ALT)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_H));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_ALT)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_T));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_ALT)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_P));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_ALT)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_B)SS_DELAY(1000)  SS_TAP(X_TAB)SS_DELAY(100)  SS_TAP(X_P)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_ENTER)SS_DELAY(420)  SS_LCTL(SS_TAP(X_V))SS_DELAY(100)  SS_TAP(X_ENTER)SS_DELAY(1000)  SS_TAP(X_ENTER)SS_DELAY(1000)  SS_TAP(X_Y)SS_DELAY(100)  SS_TAP(X_ENTER)SS_DELAY(420)  SS_TAP(X_ENTER)SS_DELAY(420)  SS_TAP(X_ENTER)SS_DELAY(420)  SS_TAP(X_ENTER)SS_DELAY(420)  SS_TAP(X_1)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_TAP(X_ENTER)SS_DELAY(100)  SS_LCTL(SS_TAP(X_C))SS_DELAY(100)  SS_LALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_TAP(X_ENTER)SS_DELAY(100)  SS_LCTL(SS_TAP(X_V))SS_DELAY(100)  SS_LALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_TAP(X_TAB)SS_DELAY(100)  SS_TAP(X_TAB)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_LCTL(SS_TAP(X_C))SS_DELAY(100)  SS_LALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_TAP(X_TAB)SS_DELAY(100)  SS_TAP(X_TAB)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_LCTL(SS_TAP(X_V))SS_DELAY(100)  SS_LALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_TAP(X_TAB)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_LCTL(SS_TAP(X_C))SS_DELAY(100)  SS_LALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_TAP(X_TAB)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_LCTL(SS_TAP(X_V)));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_ALT)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_P));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_TAP(X_TAB)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_LCTL(SS_TAP(X_C))SS_DELAY(100)  SS_LALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_TAP(X_TAB)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_LCTL(SS_TAP(X_V)));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_ALT)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_O));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_ALT)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_U));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A))SS_DELAY(100)  SS_LCTL(SS_TAP(X_C))SS_DELAY(100)  SS_RALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_TAP(X_LEFT_ALT)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(420)  SS_LCTL(SS_TAP(X_N))SS_DELAY(100)  SS_LCTL(SS_TAP(X_V))SS_DELAY(100)  SS_LCTL(SS_TAP(X_HOME))SS_DELAY(100)  SS_TAP(X_DOWN)SS_DELAY(100)  SS_TAP(X_RIGHT)SS_DELAY(100)  SS_LSFT(SS_TAP(X_END))SS_DELAY(100)  SS_LCTL(SS_TAP(X_C))SS_DELAY(100)  SS_LCTL(SS_TAP(X_S))SS_DELAY(420)  SS_LCTL(SS_TAP(X_V))SS_DELAY(100)  SS_TAP(X_ENTER)SS_DELAY(420)  SS_TAP(X_ENTER)SS_DELAY(420)  SS_TAP(X_F7));
    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_ALT)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_A));
    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_C))SS_DELAY(100)  SS_RALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_TAP(X_LEFT_ALT)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_RCTL(SS_TAP(X_N))SS_DELAY(100)  SS_RCTL(SS_TAP(X_V))SS_DELAY(100)  SS_RCTL(SS_TAP(X_S)));
    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_TAP(X_LEFT)SS_DELAY(100)  SS_TAP(X_DOWN)SS_DELAY(100)  SS_LCTL(SS_TAP(X_C))SS_DELAY(1000)  SS_RALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_RCTL(SS_TAP(X_V))SS_DELAY(100)  SS_TAP(X_ENTER)SS_DELAY(1000)  SS_TAP(X_ENTER)SS_DELAY(1000)  SS_TAP(X_ENTER)SS_DELAY(1000)  SS_RALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_TAP(X_LEFT)SS_DELAY(100)  SS_LCTL(SS_TAP(X_C))SS_DELAY(1000)  SS_RALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_RCTL(SS_TAP(X_V))SS_DELAY(100)  SS_TAP(X_ENTER)SS_DELAY(1000)  SS_RALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_TAP(X_F2)SS_DELAY(100)  SS_LSFT(SS_TAP(X_LEFT))SS_DELAY(100)  SS_LSFT(SS_TAP(X_LEFT))SS_DELAY(100)  SS_LCTL(SS_TAP(X_C))SS_DELAY(100)  SS_RALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_RCTL(SS_TAP(X_V))SS_DELAY(100)  SS_TAP(X_ENTER)SS_DELAY(1000)  SS_RALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_TAP(X_RIGHT)SS_DELAY(100)  SS_TAP(X_RIGHT)SS_DELAY(100)  SS_LCTL(SS_TAP(X_C))SS_DELAY(1000)  SS_RALT(SS_TAP(X_TAB))SS_DELAY(100)  SS_RCTL(SS_TAP(X_V))SS_DELAY(100)  SS_TAP(X_ENTER)  SS_DELAY(1000) SS_TAP(X_ENTER));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DELETE);
        } else {
          unregister_code16(KC_DELETE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RCTL(KC_DELETE));
        } else {
          unregister_code16(RCTL(KC_DELETE));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_BSPC);
        } else {
          unregister_code16(KC_BSPC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RCTL(KC_BSPC));
        } else {
          unregister_code16(RCTL(KC_BSPC));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RCTL(KC_F));
        } else {
          unregister_code16(RCTL(KC_F));
        }
      } else {
        if (record->event.pressed) {
          register_code16(RCTL(KC_H));
        } else {
          unregister_code16(RCTL(KC_H));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RCTL(KC_Z));
        } else {
          unregister_code16(RCTL(KC_Z));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_Y));
        } else {
          unregister_code16(LCTL(KC_Y));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
