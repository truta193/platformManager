#pragma once

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#define PM_WINDOWS
#include <windows.h>
#include <GL/glext.h>
#else
#define PM_LINUX

#include <X11/Xatom.h>
#include <X11/Xlib.h>
#include <GL/glx.h>
#include <sys/stat.h>

#endif

typedef signed char pm_int8;
typedef unsigned char pm_uint8;
typedef signed short pm_int16;
typedef unsigned short pm_uint16;
typedef signed int pm_int32;
typedef unsigned int pm_uint32;
typedef signed long long int pm_int64;
typedef unsigned long long int pm_uint64;
typedef float pm_float32;
typedef double pm_float64;
typedef enum {
    false, true
} pm_bool;
typedef pm_uint32 pm_id;

#define PM_MAX_NAME_LENGTH 64
#define PM_MAX_KEYCODE_COUNT 512
#define PM_ROOT_WIN_CLASS "PM_ROOT"
#define PM_CHILD_WIN_CLASS "PM_CHILD"
#define PM_WINDOW_DEFAULT_X 500
#define PM_WINDOW_DEFAULT_Y 500
#define PM_WINDOW_DEFAULT_WIDTH 500
#define PM_WINDOW_DEFAULT_HEIGHT 500
#define PM_WINDOW_DEFAULT_NAME "Ametrine"

#if defined(PM_LINUX)
#define PM_WINDOW_DEFAULT_PARENT DefaultRootWindow(pm_engine_get_subsystem(platform)->display)
#else
#define PM_WINDOW_DEFAULT_PARENT 0
#endif

typedef struct {
    pm_uint32 x;
    pm_uint32 y;
} pm_vec2u;

typedef struct {
    pm_int32 x;
    pm_int32 y;
} pm_vec2i;

typedef enum pm_key_map {
    PM_KEYCODE_INVALID,
    PM_KEYCODE_ESCAPE,
    PM_KEYCODE_F1,
    PM_KEYCODE_F2,
    PM_KEYCODE_F3,
    PM_KEYCODE_F4,
    PM_KEYCODE_F5,
    PM_KEYCODE_F6,
    PM_KEYCODE_F7,
    PM_KEYCODE_F8,
    PM_KEYCODE_F9,
    PM_KEYCODE_F10,
    PM_KEYCODE_F11,
    PM_KEYCODE_F12,
    PM_KEYCODE_F13,
    PM_KEYCODE_F14,
    PM_KEYCODE_F15,
    PM_KEYCODE_F16,
    PM_KEYCODE_F17,
    PM_KEYCODE_F18,
    PM_KEYCODE_F19,
    PM_KEYCODE_F20,
    PM_KEYCODE_F21,
    PM_KEYCODE_F22,
    PM_KEYCODE_F23,
    PM_KEYCODE_F24,
    PM_KEYCODE_F25,
    PM_KEYCODE_PRINT_SCREEN,
    PM_KEYCODE_SCROLL_LOCK,
    PM_KEYCODE_PAUSE,
    PM_KEYCODE_ACCENT_GRAVE,
    PM_KEYCODE_1,
    PM_KEYCODE_2,
    PM_KEYCODE_3,
    PM_KEYCODE_4,
    PM_KEYCODE_5,
    PM_KEYCODE_6,
    PM_KEYCODE_7,
    PM_KEYCODE_8,
    PM_KEYCODE_9,
    PM_KEYCODE_0,
    PM_KEYCODE_MINUS,
    PM_KEYCODE_EQUAL,
    PM_KEYCODE_BACKSPACE,
    PM_KEYCODE_INSERT,
    PM_KEYCODE_HOME,
    PM_KEYCODE_PAGE_UP,
    PM_KEYCODE_NUMPAD_NUM,
    PM_KEYCODE_NUMPAD_DIVIDE,
    PM_KEYCODE_NUMPAD_MULTIPLY,
    PM_KEYCODE_NUMPAD_SUBTRACT,
    PM_KEYCODE_TAB,
    PM_KEYCODE_Q,
    PM_KEYCODE_W,
    PM_KEYCODE_E,
    PM_KEYCODE_R,
    PM_KEYCODE_T,
    PM_KEYCODE_Y,
    PM_KEYCODE_U,
    PM_KEYCODE_I,
    PM_KEYCODE_O,
    PM_KEYCODE_P,
    PM_KEYCODE_LEFT_SQUARE_BRACKET,
    PM_KEYCODE_RIGHT_SQUARE_BRACKET,
    PM_KEYCODE_BACKSLASH,
    PM_KEYCODE_DELETE,
    PM_KEYCODE_END,
    PM_KEYCODE_PAGE_DOWN,
    PM_KEYCODE_NUMPAD_7,
    PM_KEYCODE_NUMPAD_8,
    PM_KEYCODE_NUMPAD_9,
    PM_KEYCODE_CAPS_LOCK,
    PM_KEYCODE_A,
    PM_KEYCODE_S,
    PM_KEYCODE_D,
    PM_KEYCODE_F,
    PM_KEYCODE_G,
    PM_KEYCODE_H,
    PM_KEYCODE_J,
    PM_KEYCODE_K,
    PM_KEYCODE_L,
    PM_KEYCODE_SEMICOLON,
    PM_KEYCODE_APOSTROPHE,
    PM_KEYCODE_ENTER,
    PM_KEYCODE_NUMPAD_4,
    PM_KEYCODE_NUMPAD_5,
    PM_KEYCODE_NUMPAD_6,
    PM_KEYCODE_NUMPAD_ADD,
    PM_KEYCODE_LEFT_SHIFT,
    PM_KEYCODE_Z,
    PM_KEYCODE_X,
    PM_KEYCODE_C,
    PM_KEYCODE_V,
    PM_KEYCODE_B,
    PM_KEYCODE_N,
    PM_KEYCODE_M,
    PM_KEYCODE_COMMA,
    PM_KEYCODE_PERIOD,
    PM_KEYCODE_SLASH,
    PM_KEYCODE_RIGHT_SHIFT,
    PM_KEYCODE_UP_ARROW,
    PM_KEYCODE_NUMPAD_1,
    PM_KEYCODE_NUMPAD_2,
    PM_KEYCODE_NUMPAD_3,
    PM_KEYCODE_LEFT_CONTROL,
    PM_KEYCODE_LEFT_META,
    PM_KEYCODE_LEFT_ALT,
    PM_KEYCODE_SPACE,
    PM_KEYCODE_RIGHT_ALT,
    PM_KEYCODE_RIGHT_META,
    PM_KEYCODE_MENU,
    PM_KEYCODE_RIGHT_CONTROL,
    PM_KEYCODE_LEFT_ARROW,
    PM_KEYCODE_DOWN_ARROW,
    PM_KEYCODE_RIGHT_ARROW,
    PM_KEYCODE_NUMPAD_0,
    PM_KEYCODE_NUMPAD_DECIMAL,
    PM_KEYCODE_NUMPAD_EQUAL,
    PM_KEYCODE_NUMPAD_ENTER,
    PM_KEYCODE_COUNT
} pm_key_map;

typedef enum pm_mouse_map {
    PM_MOUSE_BUTTON_INVALID,
    PM_MOUSE_BUTTON_LEFT,
    PM_MOUSE_BUTTON_RIGHT,
    PM_MOUSE_BUTTON_MIDDLE,
    PM_MOUSE_BUTTON_COUNT
} pm_mouse_map;

typedef enum pm_platform_events {
    PM_EVENT_INVALID,
    PM_EVENT_KEY_PRESS,
    PM_EVENT_KEY_RELEASE,
    PM_EVENT_MOUSE_MOTION,
    PM_EVENT_MOUSE_BUTTON_PRESS,
    PM_EVENT_MOUSE_BUTTON_RELEASE,
    PM_EVENT_MOUSE_SCROLL_UP,
    PM_EVENT_MOUSE_SCROLL_DOWN,
    PM_EVENT_WINDOW_SIZE,
    PM_EVENT_WINDOW_MOTION,
    PM_EVENT_COUNT
} pm_platform_events;

typedef struct pm_window_info {
    pm_uint64 parent;
    char name[PM_MAX_NAME_LENGTH];
    pm_uint32 width;
    pm_uint32 height;
    pm_uint32 x;
    pm_uint32 y;
    pm_bool is_fullscreen; //Useless for child windows, for now
} pm_window_info;

typedef pm_window_info pm_window_cache;

typedef struct pm_window {
    pm_uint64 handle;
    pm_id id;
    pm_uint64 parent;
    char name[PM_MAX_NAME_LENGTH];
    pm_uint32 width;
    pm_uint32 height;
    pm_uint32 x;
    pm_uint32 y;
    pm_bool is_fullscreen; //Useless for child windows
    pm_window_cache cache;

#if defined(PM_LINUX)
    Colormap colormap;
    XVisualInfo *visual_info;
    GLXContext context;
#else
    HDC hdc;
    HGLRC context;
#endif
} pm_window;

typedef struct pm_platform_callbacks {
    void (*pm_platform_key_callback)(pm_id, pm_key_map, pm_platform_events);

    void (*pm_platform_mouse_button_callback)(pm_id, pm_mouse_map, pm_platform_events);

    void (*pm_platform_mouse_motion_callback)(pm_id, pm_int32, pm_int32, pm_platform_events);

    void (*pm_platform_mouse_scroll_callback)(pm_id, pm_platform_events);

    void (*pm_platform_window_size_callback)(pm_id, pm_uint32, pm_uint32, pm_platform_events);

    void (*pm_platform_window_motion_callback)(pm_id, pm_uint32, pm_uint32, pm_platform_events);
} pm_platform_callbacks;

typedef struct pm_platform_input {
    struct {
        pm_key_map keycodes[PM_MAX_KEYCODE_COUNT]; //LUT
        pm_bool map[PM_KEYCODE_COUNT];
        pm_bool prev_map[PM_KEYCODE_COUNT];
    } keyboard;
    struct {
        pm_bool map[PM_MOUSE_BUTTON_COUNT];
        pm_bool prev_map[PM_MOUSE_BUTTON_COUNT];
        pm_int32 wheel_delta;
        pm_vec2u position;
        pm_vec2u cached_position;
        pm_vec2i delta;
        pm_bool locked;
        pm_bool moved;
    } mouse;
} pm_platform_input;

typedef struct pm_platform_time {
    pm_uint64 offset;
    pm_uint64 frequency;
    pm_float64 current;
    pm_float64 update;
    pm_float64 previous;
    pm_float64 render;
    pm_float64 frame;
    pm_float64 delta;
    pm_float64 target;
} pm_platform_time;

typedef struct pm_platform {
#if defined(PM_LINUX)
    Display *display;
#endif
    pm_packed_array(pm_window)
    windows;
    pm_platform_input input;
    pm_platform_time time;
    pm_platform_callbacks callbacks;
} pm_platform;


//Platform
#if defined(PM_LINUX)

pm_key_map pm_platform_translate_keysym(const KeySym *key_syms, pm_int32 width);

#endif

pm_mouse_map pm_platform_translate_button(pm_uint32 button);

pm_platform *pm_platform_create();

void pm_platform_poll_events();

#if defined(PM_WINDOWS)
LRESULT CALLBACK pm_platform_event_handler(HWND handle, pm_uint32 event, WPARAM wparam, LPARAM lparam);
#else

void pm_platform_event_handler(XEvent *xevent);

#endif

void pm_platform_update(pm_platform *platform);

void pm_platform_terminate(pm_platform *platform);

//Keyboard input
void pm_platform_key_press(pm_key_map key);

void pm_platform_key_release(pm_key_map key);

pm_bool pm_platform_key_pressed(pm_key_map key);

pm_bool pm_platform_key_down(pm_key_map key);

pm_bool pm_platform_key_released(pm_key_map key);

pm_bool pm_platform_key_up(pm_key_map key);

//Mouse input
void pm_platform_mouse_button_press(pm_mouse_map button);

void pm_platform_mouse_button_release(pm_mouse_map button);

pm_bool pm_platform_mouse_button_pressed(pm_mouse_map button);

pm_bool pm_platform_mouse_button_down(pm_mouse_map button);

pm_bool pm_platform_mouse_button_released(pm_mouse_map button);

pm_bool pm_platform_mouse_button_up(pm_mouse_map button);

void pm_platform_mouse_get_position(pm_uint32 *x, pm_uint32 *y);

pm_vec2i pm_platform_mouse_get_positionv();

void pm_platform_mouse_set_position(pm_uint32 x, pm_uint32 y);

pm_vec2i pm_platform_mouse_get_delta();

pm_int32 pm_platform_mouse_get_wheel_delta();

pm_bool pm_platform_mouse_moved();

//TODO: Corrently limited to main window, need to add some kind of currently focused window cache
void pm_platform_mouse_lock(pm_bool lock);


//Platform default callbacks
void pm_platform_key_callback_default(pm_id id, pm_key_map key, pm_platform_events event);

void pm_platform_mouse_button_callback_default(pm_id id, pm_mouse_map button, pm_platform_events event);

void pm_platform_mouse_motion_callback_default(pm_id id, pm_int32 x, pm_int32 y, pm_platform_events event);

void pm_platform_mouse_scroll_callback_default(pm_id id, pm_platform_events event);

void pm_platform_window_size_callback_default(pm_id id, pm_uint32 width, pm_uint32 height, pm_platform_events event);

void pm_platform_window_motion_callback_default(pm_id id, pm_uint32 x, pm_uint32 y, pm_platform_events event);

#define pm_platform_set_key_callback(platform, callback) platform->callbacks.pm_platform_key_callback = callback
#define pm_platform_set_mouse_button_callback(platform, callback) platform->callbacks.pm_platform_mouse_button_callback = callback
#define pm_platform_set_mouse_motion_callback(platform, callback) platform->callbacks.pm_platform_mouse_motion_callback = callback
#define pm_platform_set_mouse_scroll_callback(platform, callback) platform->callbacks.pm_platform_mouse_scroll_callback = callback
#define pm_platform_set_window_size_callback(platform, callback) platform->callbacks.pm_platform_window_size_callback = callback
#define pm_platform_set_window_motion_callback(platform, callback) platform->callbacks.pm_platform_window_motion_callback = callback

//Windows
pm_id pm_platform_window_create(pm_window_info window_info);

void pm_platform_window_resize(pm_id id, pm_uint32 width, pm_uint32 height);

void pm_platform_window_move(pm_id id, pm_uint32 x, pm_uint32 y);

void pm_platform_window_fullscreen(pm_id id, pm_bool state);

pm_vec2u pm_platform_window_get_size(pm_id id);

void pm_platform_window_destroy(pm_id id);

//Time
void pm_platform_timer_create();

void pm_platform_timer_sleep(pm_float32 ms);

pm_uint64 pm_platform_timer_value();

pm_uint64 pm_platform_elapsed_time();

//----------------------------------------------------------------------------//
//                                END PLATFORM                                //
//----------------------------------------------------------------------------//