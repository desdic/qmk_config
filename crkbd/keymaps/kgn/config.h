#pragma once

// Set the mouse settings to a comfortable speed/accuracy trade-off,
// assuming a screen refresh rate of 60 Htz or higher
// The default is 50. This makes the mouse ~3 times faster and more accurate
#define MOUSEKEY_INTERVAL 16
// The default is 20. Since we made the mouse about 3 times faster with the previous setting,
// give it more time to accelerate to max speed to retain precise control over short distances.
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 4
// The default is 300. Let's try and make this as low as possible while keeping the cursor responsive
#define MOUSEKEY_DELAY 100
// It makes sense to use the same delay for the mouseweel
#define MOUSEKEY_WHEEL_DELAY 100
// The default is 100
#define MOUSEKEY_WHEEL_INTERVAL 50
// The default is 40
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100

#define CAPS_WORD_IDLE_TIMEOUT 5000 // turns off after 5s of inactivity

#define RETRO_TAPPING
// #define QUICK_TAP_TERM 0
#define QUICK_TAP_TERM 120

// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 175
#define TAPPING_TERM_PER_KE
#define CHORDAL_HOLD
#define PERMISSIVE_HOLD

#define RGB_DISABLE_TIMEOUT 300000
