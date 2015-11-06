/* 
 * HHKB JP Layout
 *
 * make -f Makefile.jp KEYMAP=jp_xinhao, then flush hhkb_lufa.hex
 *
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer */
    [0] =
    KEYMAP_JP(ESC ,1   ,2   ,3   ,4   ,5   ,6   ,7   ,8   ,9   ,0   ,MINS,EQL ,GRV ,BSPC, \
              TAB   ,Q   ,W   ,E   ,R   ,T   ,Y   ,U   ,I   ,O   ,P   ,LBRC,RBRC,         \
              LCTL   ,A   ,S   ,D   ,F   ,G   ,H   ,J   ,K   ,L   ,SCLN,QUOT,BSLS,ENT, \
              LSFT    ,Z   ,X   ,C   ,V   ,B   ,N   ,M   ,COMM,DOT ,SLSH,RSFT,UP  ,RSFT, \
              FN0 ,FN31,LGUI,LALT,MHEN,    SPC     ,HENK,RCTL,RALT,FN0 , LEFT,DOWN,RGHT),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
     * |------------------------------------------------------`    |
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|   |    |
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |  +|  -|End|PgD|Dow|   |   |   |
     * |-----------------------------------------------------------|
     * |   ||   |   |   |   |         |   |   |   |   ||   |   |   |
     * `-----------------------------------------------------------'
     */
    [1] =
    KEYMAP_JP(PWR ,F1  ,F2  ,F3  ,F4  ,F5  ,F6  ,F7  ,F8  ,F9  ,F10 ,F11 ,F12 ,INS ,DEL ,\
              CAPS  ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS,        \
              TRNS   ,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,TRNS,PENT,  \
              TRNS    ,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,PGUP,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,    TRNS    ,TRNS,TRNS,TRNS,TRNS, HOME,PGDN,END),

    /* Layer 2: Mouse key mode
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |------------------------------------------------------`    |
     * |      |   |   |   |   |   |   |   |   |   |   |MwU|Mb3|    |
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |   |   |   |   |Mb1|MwD|McU|Mb2|
     * |-----------------------------------------------------------|
     * |   ||   |   |   |   |         |   |   |   |   ||McL|McD|McR|
     * `-----------------------------------------------------------'
     */
    [2] = 
    KEYMAP_JP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,\
              TRNS  ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        \
              TRNS   ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_U,BTN3,TRNS,  \
              TRNS    ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BTN1,WH_D,MS_U,BTN2, \
              TRNS,TRNS,TRNS,TRNS,TRNS,    TRNS    ,TRNS,TRNS,TRNS,TRNS ,MS_L,MS_D,MS_R),    
    /* Layer 3: Extra Modifiers
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |------------------------------------------------------`    |
     * |      |   |   |   |   |   |   |   |   |   |   |   |   |    |
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |   ||   |   |   |FN3|         |FN4|FN5|   |   ||   |   |   |
     * `-----------------------------------------------------------'
     */
    [3] = 
    KEYMAP_JP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,\
              TRNS  ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        \
              TRNS   ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
              TRNS    ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,FN3 ,    TRNS    ,FN4 ,FN5 ,TRNS,TRNS ,TRNS,TRNS,TRNS),    
    /* Layer 31: Function selecting mode
     * ,-----------------------------------------------------------.
     * |   | MK| DK|   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |------------------------------------------------------`    |
     * |      |   |   |   |   |   |   |   |   |   |   |   |   |    |
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |   ||   |   |   |   |         |   |   |   |   ||   |   |   |
     * `-----------------------------------------------------------'
     */
    [31] = 
    KEYMAP_JP(NO  ,FN1 ,FN2 ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,\
              NO    ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,        \
              NO     ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,  \
              NO      ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  , \
              NO  ,TRNS,NO  ,NO  ,NO  ,    NO      ,NO  ,NO  ,NO  ,NO   ,NO  ,NO  ,NO  ),    
};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_INVERT(2, ON_PRESS),
    [2] = ACTION_LAYER_INVERT(3, ON_PRESS),
    [3] = ACTION_NO,
    [4] = ACTION_NO,
    [5] = ACTION_NO,
    [31] = ACTION_LAYER_MOMENTARY(31),
};
