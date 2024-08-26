#include QMK_KEYBOARD_H
#include <stdio.h>

enum layer_number {

    _HDGOLD = 0,
    _COLEMAK = 1,
    _NUMBERNUMBER = 2,
    _SUFN = 3,
    _ARCANE = 4,
    _CTRLCOLEMAK = 5,
    _GAMING = 6,
    _ADJUST = 7,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
    //-----------------------------------------------------------------------.                ,-------------------------------------------------------------.
      KC_Q        ,  KC_W       ,  KC_F        ,  KC_P        ,  KC_G        ,                KC_J      ,  KC_L      ,  KC_U      ,  KC_Y      ,  KC_SCLN   ,
      KC_A        ,  KC_R       ,  KC_S        ,  KC_T        ,  KC_D        ,                KC_H      ,  KC_N      ,  KC_E      ,  KC_I      ,  KC_O      ,
      KC_X        ,  KC_SLSH    ,  KC_C        ,  KC_V        ,  KC_B        ,                KC_K      ,  KC_M      ,  KC_COMM   ,  KC_DOT    ,  KC_QUOT   ,
    //-----------------------------------------------------------------------|                |-------------------------------------------------------------.
      TO(6)       ,  KC_SPC     ,  KC_LGUI     ,  LSFT_T(KC_R),  MO(4)       ,                MO(2)     ,  KC_SPC    ,  MO(3)     ,  MO(7)     ,  KC_NO
    //-----------------------------------------------------------------------'                '-------------------------------------------------------------'
  ),

  [1] = LAYOUT(
    //-----------------------------------------------------------------------.                ,-------------------------------------------------------------.
      KC_Q        ,  KC_W       ,  KC_F        ,  KC_P        ,  KC_G        ,                KC_J      ,  KC_L      ,  KC_U      ,  KC_Y      ,  KC_SCLN   ,
      KC_A        ,  KC_R       ,  KC_S        ,  KC_T        ,  KC_D        ,                KC_H      ,  KC_N      ,  KC_E      ,  KC_I      ,  KC_O      ,
      KC_X        ,  KC_SLSH    ,  KC_C        ,  KC_V        ,  KC_B        ,                KC_K      ,  KC_M      ,  KC_COMM   ,  KC_DOT    ,  KC_Q      ,
    //-----------------------------------------------------------------------|                |-------------------------------------------------------------.
      TO(6)       ,  KC_SPC     , OSM(MOD_LGUI),  KC_LSFT     ,  MO(4)       ,                MO(2)     ,  KC_SPC    ,  MO(3)     ,  MO(7)     ,  KC_NO
    //-----------------------------------------------------------------------'                '-------------------------------------------------------------'
  ),

  [2] = LAYOUT(
    //-----------------------------------------------------------------------.                ,-------------------------------------------------------------.
     OSM(MOD_LGUI),OSM(MOD_LALT),OSM(MOD_LSFT) ,OSM(MOD_LCTL) ,  KC_K        ,                KC_NO ,OSM(MOD_RCTL),OSM(MOD_RSFT),OSM(MOD_RALT),OSM(MOD_RGUI),
      KC_GRV      ,  KC_COLN    ,  KC_MINS     ,  KC_0        ,  KC_PIPE     ,                KC_AMPR   ,  KC_1      ,  KC_EQL    ,  KC_UNDS   ,  KC_PERC   ,
      KC_6        ,  KC_7       ,  KC_8        ,  KC_9        ,  KC_NO       ,                KC_TILD   ,  KC_2      ,  KC_3      ,  KC_4      ,  KC_5      ,
    //-----------------------------------------------------------------------|                |-------------------------------------------------------------.
      KC_NO       ,  KC_NO      ,  KC_NO       , LSFT_T(KC_J),LM(5, MOD_LCTL),                KC_TRNS   ,  KC_NO     ,  KC_NO     ,  TO(1)     ,  KC_NO
    //-----------------------------------------------------------------------'                '-------------------------------------------------------------'
  ),

  [3] = LAYOUT(
    //-----------------------------------------------------------------------.                ,-------------------------------------------------------------.
      QK_BOOT     ,  KC_NO      ,  KC_NO       ,  KC_NO       ,  KC_NO       ,                KC_NO     ,  KC_NO     ,  KC_NO     ,  KC_NO     ,  KC_NO     ,
      KC_NO       ,  KC_COLN    ,LCTL(KC_BSPC) ,  KC_TAB      ,  KC_DEL      ,                KC_LEFT   ,  KC_DOWN   ,  KC_UP     ,  KC_RGHT   ,  KC_ENT    ,
      KC_NO       ,  KC_NO      ,  KC_Z        ,  KC_NO       ,  KC_NO       ,                KC_NO     ,  KC_NO     ,  KC_NO     ,  KC_NO     ,  KC_NO     ,
    //-----------------------------------------------------------------------|                |-------------------------------------------------------------.
      KC_NO       ,  KC_NO      ,  KC_NO       ,  KC_ESC      ,  KC_NO       ,                KC_NO     ,  KC_NO     ,  KC_TRNS   ,  TO(1)     ,  KC_NO
    //-----------------------------------------------------------------------'                '-------------------------------------------------------------'
  ),

  [4] = LAYOUT(
    //-----------------------------------------------------------------------.                ,-------------------------------------------------------------.
      KC_F1       ,  KC_LBRC    ,  KC_RBRC     ,  KC_LEFT     ,  KC_F7       ,                KC_F9     ,  KC_LEFT   ,  KC_RPRN   ,  KC_LPRN   ,  KC_F4     ,
      KC_F1       ,  KC_LCBR    ,  KC_RCBR     ,  KC_LEFT     ,  KC_F11      ,                KC_F12    ,  KC_LEFT   ,  KC_DQUO   ,  KC_DQUO   ,  KC_F5     ,
      KC_F3       ,  KC_QUOT    ,  KC_QUOT     ,  KC_LEFT     ,  KC_F8       ,                KC_F10    ,  KC_LEFT   ,  KC_GT     ,  KC_LT     ,  KC_F6     ,
    //-----------------------------------------------------------------------|                |-------------------------------------------------------------.
      KC_NO       ,  KC_NO      ,  KC_NO       ,  KC_NO       ,  KC_TRNS    ,                 LM(5, MOD_LCTL),MO(0)  ,  KC_NO     ,  TO(1)     ,  KC_NO
    //-----------------------------------------------------------------------'                '-------------------------------------------------------------'
  ),


  [5] = LAYOUT(
    //-----------------------------------------------------------------------.                ,-------------------------------------------------------------.
      KC_Q        ,  KC_W       ,  KC_F        ,  KC_P        ,  KC_G        ,                KC_J      ,  KC_L      ,  KC_U      ,  KC_Y      ,  KC_SCLN   ,
      KC_A        ,  KC_R       ,  KC_S        ,  KC_T        ,  KC_D        ,                KC_H      ,  KC_N      ,  KC_E      ,  KC_I      ,  KC_O      ,
      KC_X        ,  KC_SLSH    ,  KC_C        ,  KC_V        ,  KC_B        ,                KC_K      ,  KC_M      ,  KC_COMM   ,  KC_DOT    ,  KC_Q      ,
    //-----------------------------------------------------------------------|                |-------------------------------------------------------------.
      TO(5)       ,  KC_SPC     , OSM(MOD_LGUI),  KC_LSFT     ,  MO(4)       ,                MO(2)     ,  KC_SPC    ,  MO(3)     ,  MO(7)     ,  KC_NO
    //-----------------------------------------------------------------------'                '-------------------------------------------------------------'
  ),


  [6] = LAYOUT(
    //-----------------------------------------------------------------------.                ,-------------------------------------------------------------.
      KC_Q        ,  KC_W       ,  KC_E        ,  KC_R        ,  KC_T        ,                TO(0)     ,  TO(0)     ,  TO(0)     ,  TO(0)     ,  TO(0)     ,
      KC_A        ,  KC_S       ,  KC_D        ,  KC_F        ,  KC_G        ,                TO(0)     ,  TO(0)     ,  TO(0)     ,  TO(0)     ,  TO(0)     ,
      KC_Z        ,  KC_X       ,  KC_C        ,  KC_V        ,  KC_B        ,                TO(0)     ,  TO(0)     ,  TO(0)     ,  TO(0)     ,  TO(0)     ,
    //-----------------------------------------------------------------------|                |-------------------------------------------------------------.
      KC_TRNS     ,  KC_DOWN    ,  MO(7)       ,  KC_SPC      ,  KC_DOWN     ,                MO(2)     ,  KC_SPC    ,  MO(3)     ,  MO(7)     ,  KC_NO
    //-----------------------------------------------------------------------'                '-------------------------------------------------------------'
  ),


  [7] = LAYOUT(
    //-----------------------------------------------------------------------.                ,-------------------------------------------------------------.
      KC_Y        ,  KC_U       ,  KC_I        ,  KC_O        ,  KC_P        ,                TO(0)     ,  TO(1)     ,  TO(6)     ,  KC_NO     ,  KC_NO     ,
      KC_H        ,  KC_J       ,  KC_K        ,  KC_L        ,  KC_F2       ,                DF(1)     ,  KC_NO     ,  KC_NO     ,  KC_NO     ,  KC_NO     ,
      KC_N        ,  KC_M       ,  KC_F1       ,  KC_F3       ,  KC_F4       ,                KC_NO     ,  KC_NO     ,  KC_NO     ,  KC_NO     ,  KC_NO     ,
    //-----------------------------------------------------------------------|                |-------------------------------------------------------------.
      KC_NO       ,  KC_NO      ,  KC_TRNS     ,  KC_NO       ,  KC_NO       ,                KC_NO     ,  KC_NO     ,  KC_NO     ,  KC_TRNS   ,  KC_NO
    //-----------------------------------------------------------------------'                '-------------------------------------------------------------'
  ),
};

#ifdef OLED_ENABLE

void oled_render_layer_state(void) {
    oled_write_P(PSTR("\nFirmware zepmash\n"), false);
    oled_write_P(PSTR("rev 13_1\n\n"), false);
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_ln_P(PSTR("Hands Down GOLD"), false);
            break;
        case 1:
            oled_write_ln_P(PSTR("Colemak"), false);
            break;
        case 2:
            oled_write_ln_P(PSTR("NumberNumber"), false);
            break;
        case 3:
            oled_write_ln_P(PSTR("Su_FN"), false);
            break;
        case 4:
            oled_write_ln_P(PSTR("ARCANE"), false);
            break;
        case 5:
            oled_write_ln_P(PSTR("CTRLCOLEMAK"), false);
            break;
        case 6:
            oled_write_ln_P(PSTR("GAMING"), false);
            break;
        case 7:
/*        case L_FUNC|L_NUM:
        case L_FUNC|L_SYM:
        case L_FUNC|L_NUM|L_SYM:*/
            oled_write_ln_P(PSTR("ADJUST"), false);
            break;
    }
}

char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_180; }

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
         // clang-format off
         static const char PROGMEM kora_logo[] = {
             // 'kora', 128x64px
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8,
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07,
0x0f, 0x0f, 0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0x83, 0x83, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
0xc3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
0x00, 0x00, 0x00, 0xe0, 0xc0, 0xc0, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x07, 0x07, 0x0f, 0x0f, 0x1f, 0x1f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xfe, 0xfc,
0xfc, 0xf8, 0xf8, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
0x00, 0x00, 0x00, 0x1f, 0x1f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x00, 0x00,
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xf8, 0xf8, 0xf8, 0xf0, 0xf0,
0xf0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
0x03, 0x07, 0x07, 0x0f, 0x0f, 0x1f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0xe3, 0xc3, 0xc3, 0xc3, 0xc7, 0x87, 0x87,
0x87, 0x0f, 0x0f, 0x0f, 0x1f, 0x1f, 0x1f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x3f, 0x3f, 0x3f,
0x3f, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
         };
         // clang-format on
         oled_write_raw_P(kora_logo, sizeof(kora_logo));
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

#ifdef ENCODER_ENABLE
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) {
        return false;
    }

    if (index == 1) {
        // Volume control
        if (clockwise) {
            tap_code(KC_LEFT);
        } else {
            tap_code(KC_RGHT);
        }
    } else if (index == 0) {
        // Page up/Page down
        if (clockwise) {
            // tap_code(KC_PGDN);
            tap_code(KC_NO);
        } else {
            // tap_code(KC_PGUP);
            tap_code(KC_NO);
        }
    }
    return true;
}
#endif

