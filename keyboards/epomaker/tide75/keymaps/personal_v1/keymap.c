// Copyright 2024 SDK (@sdk66)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
  _COLEMAK,
  _QWERTY,
  _LOWER,
  _RAISE
  //_ADJUST
};

enum keycodes {
  COLEMAK = SAFE_RANGE,
  QWERTY
};

enum custom_keycodes {
  BTDEV1 = SAFE_RANGE,
  BTDEV2,
  BTDEV3,
  BTDEV4,
  BTDEV5,
  WIRELESS,
  USBC,
  IM_BATQ,
  SOMETHING,
  RL_MOD
};


#define LOWER TT(_LOWER)
#define RAISE TT(_RAISE)
#define COPA LT(0,KC_NO)
#define BCKSPC LT(0,KC_BSPC)


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_COLEMAK] = LAYOUT( /* Base */

        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   QWERTY,  
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSLS,   KC_HOME,  
        KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_LBRC,  KC_RBRC,  BCKSPC,  KC_END,    
        COPA,     KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_M,     KC_N,     KC_E,     KC_I,     KC_O,     KC_QUOT,            KC_ENT,   KC_PGUP,          
        KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,OSL(_LOWER),   KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_SLSH,  OSM(MOD_RSFT),      KC_UP,    KC_PGDN,
        KC_LCTL,  KC_LALT,  OSM(MOD_LSFT),  KC_SPC,             KC_RALT,  KC_SPC,   KC_SPC,             LOWER,    RAISE,    KC_RGUI,  KC_LEFT,  KC_DOWN,  KC_RGHT
    ),
	
	[_QWERTY] = LAYOUT( /* Base */
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   COLEMAK,  
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   BCKSPC,   KC_HOME,  
        KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_END,    
        COPA,     KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_M,     KC_N,     KC_E,     KC_I,     KC_O,     KC_QUOT,            KC_ENT,   KC_PGUP,          
  OSM(MOD_LSFT),  KC_X,     KC_C,     KC_D,     KC_V,     KC_Z,     KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,            KC_UP,    KC_PGDN,
        KC_LCTL,  KC_LGUI,  KC_LALT,  KC_SPC,             KC_RALT,  KC_SPC,   KC_SPC,             LOWER,    RAISE,    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT
    ),
	

/*     [_ADJUST] = LAYOUT( 
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   
        _______,  COLEMAK,  QWERTY,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______, 
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  EE_CLR,             _______,  EE_CLR,   EE_CLR,             _______,  _______,  _______,  _______,  _______,  _______
    ), */
	[_LOWER] = LAYOUT( 

        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_INS,  KC_MS_BTN1,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   
        _______,  _______,     KC_7,     KC_8,     KC_9,  _______,  _______,    KC_F7,    KC_F8,    KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,  _______,  
        _______,  _______,     KC_4,     KC_5,     KC_6,  KC_MINS,   KC_EQL,    KC_F4,    KC_F5,    KC_F6,  _______,  _______,  _______,              _______, 
        _______,     KC_1,     KC_2,     KC_3,  _______,  _______,  _______,    KC_F1,    KC_F2,    KC_F3,  _______,  _______,            KC_MS_U,  KC_MS_BTN2,
        _______,  _______,  _______,     KC_0,             _______,  _______,   _______,             _______,  _______,  _______,  KC_MS_L,  KC_MS_D,  KC_MS_R
    ),
	[_RAISE] = LAYOUT( 
        EE_CLR,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_INS,  KC_MS_BTN1,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   
        _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  
   KC_CAPS_LOCK,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______, 
    KC_NUM_LOCK,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  EE_CLR,             _______,  EE_CLR,   EE_CLR,             _______,  _______,  _______,  _______,  _______,  _______
    )
};

//#ifdef ENCODER_MAP_ENABLE
#ifdef ENCODER_ENABLE
bool is_alt_tab_active = false; // ADD this near the begining of keymap.c
bool is_alt_shift_tab_active = false; // ADD this near the begining of keymap.c
uint16_t alt_tab_timer = 0;     // we will be using them soon.

//ALT TAB Encoder Timer
void matrix_scan_user(void) { // The very important timer.
  if (is_alt_tab_active) {
    if (timer_elapsed(alt_tab_timer) > 900) {
      unregister_code(KC_LALT);
      unregister_code(KC_LSFT);
      is_alt_tab_active = false;
      is_alt_shift_tab_active = false;
    }
  }
};
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (get_highest_layer(layer_state|default_layer_state) == _COLEMAK) {
        if (clockwise) {
			if (!is_alt_tab_active) {
			is_alt_tab_active = true;
			register_code(KC_LALT);
			}
			alt_tab_timer = timer_read();
			tap_code16(KC_TAB);
			} else {
			if (!is_alt_tab_active) {
			is_alt_tab_active = true;
			register_code(KC_LALT);
			}
			alt_tab_timer = timer_read();
			tap_code16(S(KC_TAB));
			}
    }

    else if (get_highest_layer(layer_state|default_layer_state) == _QWERTY) {  
        
		if (clockwise) {
		if (!is_alt_tab_active) {
		is_alt_tab_active = true;
		register_code(KC_LALT);
		}
		alt_tab_timer = timer_read();
		tap_code16(KC_TAB);
		} else {
		if (!is_alt_tab_active) {
		is_alt_tab_active = true;
		register_code(KC_LALT);
		}
		alt_tab_timer = timer_read();
		tap_code16(S(KC_TAB));
		}
        
    }
	
/* 	else if (get_highest_layer(layer_state|default_layer_state) == _ADJUST) {  
        
		if (clockwise) {

		} else {

		}
        
    } */
	
	else if (get_highest_layer(layer_state|default_layer_state) == _LOWER) { 
        
		if (clockwise) {
		  tap_code16(KC_UP);
		} else {
		  tap_code16(KC_DOWN);
		}
        
    }
	
	else if (get_highest_layer(layer_state|default_layer_state) == _RAISE) {  
        
		if (clockwise) {
		  tap_code16(C(KC_TAB));
		} else {
		  tap_code16(S(C(KC_TAB)));
		}
    }
    return false;
};

/* const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
	[_COLEMAK] = {ENCODER_CCW_CW(_______, _______)},
	[_QWERTY] = {ENCODER_CCW_CW(_______, _______)},
    [_LOWER] = {ENCODER_CCW_CW(_______, _______)},
    [_RAISE] = {ENCODER_CCW_CW(_______), _______)}
}; */
#endif

// clang-format on

/* layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
} */

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case COLEMAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAK);
      }
      return false;
      break;
    
	//tap backspace, hold is ctrl+bkspc
	case BCKSPC:
      if (!record->tap.count && record->event.pressed) {
          tap_code16(C(KC_BSPC)); // Intercept hold function to send CTRL-BKSPC
          return false;
      }
      return true;             // Return true for normal processing of tap keycode 
	//handle copy and paste on a single key
	case COPA:
      if (record->tap.count && record->event.pressed) {
          tap_code16(C(KC_C)); // Intercept tap function to send Ctrl-C
      } else if (record->event.pressed) {
          tap_code16(C(KC_V)); // Intercept hold function to send Ctrl-V
      }
      return false;
  }
  return true;
}
