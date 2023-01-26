#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Moorekeys
#define PRODUCT         Choc Pteron56-LX1
//DEPRECIATED #define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS { B6, D7, E6, B4, C7 }
#define MATRIX_COL_PINS { D3, D2, F5, B5, D4, C6, B2, B3, B1, F7, F6, F4 }
//DEPRECIATED #define UNUSED_PINS
	
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

#define RGB_DI_PIN F0

/* encoder section */

#define ENCODERS_PAD_A { D5 }
#define ENCODERS_PAD_B { B7 }

/*DEPRECIATED Set 0 if debouncing isn't needed */
//#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/*DEPRECIATED prevent stuck modifiers */
//#define PREVENT_STUCK_MODIFIERS
/* define OLED_BRIGHTNESS 128 */

//DEPRECIATED #define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 3
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#endif