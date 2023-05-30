#include "platformManager.h"


#if defined(PM_LINUX)

pm_key_map pm_platform_translate_keysym(const KeySym *key_syms, pm_int32 width) {
    if (width > 1) {
        switch (key_syms[1]) {
            case XK_KP_0:
                return PM_KEYCODE_NUMPAD_0;
            case XK_KP_1:
                return PM_KEYCODE_NUMPAD_1;
            case XK_KP_2:
                return PM_KEYCODE_NUMPAD_2;
            case XK_KP_3:
                return PM_KEYCODE_NUMPAD_3;
            case XK_KP_4:
                return PM_KEYCODE_NUMPAD_4;
            case XK_KP_5:
                return PM_KEYCODE_NUMPAD_5;
            case XK_KP_6:
                return PM_KEYCODE_NUMPAD_6;
            case XK_KP_7:
                return PM_KEYCODE_NUMPAD_7;
            case XK_KP_8:
                return PM_KEYCODE_NUMPAD_8;
            case XK_KP_9:
                return PM_KEYCODE_NUMPAD_9;
            case XK_KP_Separator:
            case XK_KP_Decimal:
                return PM_KEYCODE_NUMPAD_DECIMAL;
            case XK_KP_Equal:
                return PM_KEYCODE_NUMPAD_EQUAL;
            case XK_KP_Enter:
                return PM_KEYCODE_NUMPAD_ENTER;
            default:
                break;
        };
    };

    switch (key_syms[0]) {
        case XK_Escape:
            return PM_KEYCODE_ESCAPE;
        case XK_Tab:
            return PM_KEYCODE_TAB;
        case XK_Shift_L:
            return PM_KEYCODE_LEFT_SHIFT;
        case XK_Shift_R:
            return PM_KEYCODE_RIGHT_SHIFT;
        case XK_Control_L:
            return PM_KEYCODE_LEFT_CONTROL;
        case XK_Control_R:
            return PM_KEYCODE_RIGHT_CONTROL;
        case XK_Alt_L:
            return PM_KEYCODE_LEFT_ALT;
        case XK_Alt_R:
            return PM_KEYCODE_RIGHT_ALT;
        case XK_Super_L:
            return PM_KEYCODE_LEFT_META;
        case XK_Super_R:
            return PM_KEYCODE_RIGHT_META;
        case XK_Menu:
            return PM_KEYCODE_MENU;
        case XK_Num_Lock:
            return PM_KEYCODE_NUMPAD_NUM;
        case XK_Caps_Lock:
            return PM_KEYCODE_CAPS_LOCK;
        case XK_Print:
            return PM_KEYCODE_PRINT_SCREEN;
        case XK_Scroll_Lock:
            return PM_KEYCODE_SCROLL_LOCK;
        case XK_Pause:
            return PM_KEYCODE_PAUSE;
        case XK_Delete:
            return PM_KEYCODE_DELETE;
        case XK_BackSpace:
            return PM_KEYCODE_BACKSPACE;
        case XK_Return:
            return PM_KEYCODE_ENTER;
        case XK_Home:
            return PM_KEYCODE_HOME;
        case XK_End:
            return PM_KEYCODE_END;
        case XK_Page_Up:
            return PM_KEYCODE_PAGE_UP;
        case XK_Page_Down:
            return PM_KEYCODE_PAGE_DOWN;
        case XK_Insert:
            return PM_KEYCODE_INSERT;
        case XK_Left:
            return PM_KEYCODE_LEFT_ARROW;
        case XK_Right:
            return PM_KEYCODE_RIGHT_ARROW;
        case XK_Down:
            return PM_KEYCODE_DOWN_ARROW;
        case XK_Up:
            return PM_KEYCODE_UP_ARROW;
        case XK_F1:
            return PM_KEYCODE_F1;
        case XK_F2:
            return PM_KEYCODE_F2;
        case XK_F3:
            return PM_KEYCODE_F3;
        case XK_F4:
            return PM_KEYCODE_F4;
        case XK_F5:
            return PM_KEYCODE_F5;
        case XK_F6:
            return PM_KEYCODE_F6;
        case XK_F7:
            return PM_KEYCODE_F7;
        case XK_F8:
            return PM_KEYCODE_F8;
        case XK_F9:
            return PM_KEYCODE_F9;
        case XK_F10:
            return PM_KEYCODE_F10;
        case XK_F11:
            return PM_KEYCODE_F11;
        case XK_F12:
            return PM_KEYCODE_F12;
        case XK_F13:
            return PM_KEYCODE_F13;
        case XK_F14:
            return PM_KEYCODE_F14;
        case XK_F15:
            return PM_KEYCODE_F15;
        case XK_F16:
            return PM_KEYCODE_F16;
        case XK_F17:
            return PM_KEYCODE_F17;
        case XK_F18:
            return PM_KEYCODE_F18;
        case XK_F19:
            return PM_KEYCODE_F19;
        case XK_F20:
            return PM_KEYCODE_F20;
        case XK_F21:
            return PM_KEYCODE_F21;
        case XK_F22:
            return PM_KEYCODE_F22;
        case XK_F23:
            return PM_KEYCODE_F23;
        case XK_F24:
            return PM_KEYCODE_F24;
        case XK_F25:
            return PM_KEYCODE_F25;
        case XK_KP_Divide:
            return PM_KEYCODE_NUMPAD_DIVIDE;
        case XK_KP_Multiply:
            return PM_KEYCODE_NUMPAD_MULTIPLY;
        case XK_KP_Subtract:
            return PM_KEYCODE_NUMPAD_SUBTRACT;
        case XK_KP_Add:
            return PM_KEYCODE_NUMPAD_ADD;
        case XK_KP_Insert:
            return PM_KEYCODE_NUMPAD_0;
        case XK_KP_End:
            return PM_KEYCODE_NUMPAD_1;
        case XK_KP_Down:
            return PM_KEYCODE_NUMPAD_2;
        case XK_KP_Page_Down:
            return PM_KEYCODE_NUMPAD_3;
        case XK_KP_Left:
            return PM_KEYCODE_NUMPAD_4;
        case XK_KP_Right:
            return PM_KEYCODE_NUMPAD_6;
        case XK_KP_Home:
            return PM_KEYCODE_NUMPAD_7;
        case XK_KP_Up:
            return PM_KEYCODE_NUMPAD_8;
        case XK_KP_Page_Up:
            return PM_KEYCODE_NUMPAD_9;
        case XK_KP_Delete:
            return PM_KEYCODE_NUMPAD_DECIMAL;
        case XK_KP_Equal:
            return PM_KEYCODE_NUMPAD_EQUAL;
        case XK_KP_Enter:
            return PM_KEYCODE_NUMPAD_ENTER;
        case XK_a:
            return PM_KEYCODE_A;
        case XK_b:
            return PM_KEYCODE_B;
        case XK_c:
            return PM_KEYCODE_C;
        case XK_d:
            return PM_KEYCODE_D;
        case XK_e:
            return PM_KEYCODE_E;
        case XK_f:
            return PM_KEYCODE_F;
        case XK_g:
            return PM_KEYCODE_G;
        case XK_h:
            return PM_KEYCODE_H;
        case XK_i:
            return PM_KEYCODE_I;
        case XK_j:
            return PM_KEYCODE_J;
        case XK_k:
            return PM_KEYCODE_K;
        case XK_l:
            return PM_KEYCODE_L;
        case XK_m:
            return PM_KEYCODE_M;
        case XK_n:
            return PM_KEYCODE_N;
        case XK_o:
            return PM_KEYCODE_O;
        case XK_p:
            return PM_KEYCODE_P;
        case XK_q:
            return PM_KEYCODE_Q;
        case XK_r:
            return PM_KEYCODE_R;
        case XK_s:
            return PM_KEYCODE_S;
        case XK_t:
            return PM_KEYCODE_T;
        case XK_u:
            return PM_KEYCODE_U;
        case XK_v:
            return PM_KEYCODE_V;
        case XK_w:
            return PM_KEYCODE_W;
        case XK_x:
            return PM_KEYCODE_X;
        case XK_y:
            return PM_KEYCODE_Y;
        case XK_z:
            return PM_KEYCODE_Z;
        case XK_1:
            return PM_KEYCODE_1;
        case XK_2:
            return PM_KEYCODE_2;
        case XK_3:
            return PM_KEYCODE_3;
        case XK_4:
            return PM_KEYCODE_4;
        case XK_5:
            return PM_KEYCODE_5;
        case XK_6:
            return PM_KEYCODE_6;
        case XK_7:
            return PM_KEYCODE_7;
        case XK_8:
            return PM_KEYCODE_8;
        case XK_9:
            return PM_KEYCODE_9;
        case XK_0:
            return PM_KEYCODE_0;
        case XK_space:
            return PM_KEYCODE_SPACE;
        case XK_minus:
            return PM_KEYCODE_MINUS;
        case XK_equal:
            return PM_KEYCODE_EQUAL;
        case XK_bracketleft:
            return PM_KEYCODE_LEFT_SQUARE_BRACKET;
        case XK_bracketright:
            return PM_KEYCODE_RIGHT_SQUARE_BRACKET;
        case XK_backslash:
            return PM_KEYCODE_BACKSLASH;
        case XK_semicolon:
            return PM_KEYCODE_SEMICOLON;
        case XK_apostrophe:
            return PM_KEYCODE_APOSTROPHE;
        case XK_grave:
            return PM_KEYCODE_ACCENT_GRAVE;
        case XK_comma:
            return PM_KEYCODE_COMMA;
        case XK_period:
            return PM_KEYCODE_PERIOD;
        case XK_slash:
            return PM_KEYCODE_SLASH;
        default:
            return PM_KEYCODE_INVALID;
    };
};
#endif

pm_mouse_map pm_platform_translate_button(pm_uint32 button) {
    switch (button) {
        case 1:
            return PM_MOUSE_BUTTON_LEFT;
        case 2:
            return PM_MOUSE_BUTTON_MIDDLE;
        case 3:
            return PM_MOUSE_BUTTON_RIGHT;
        default:
            return PM_MOUSE_BUTTON_INVALID;
    };
};

pm_platform *pm_platform_create() {
    pm_platform *platform = (pm_platform *) pm_malloc(sizeof(pm_platform));
    if (platform == NULL) printf("[FAIL] pm_platform_create: Could not allocate memory!\n");
    assert(platform != NULL);
    platform->windows = NULL;
    pm_packed_array_init(platform->windows, sizeof(pm_window));

    memset(&platform->time, 0, sizeof(platform->time));

#if defined(PM_LINUX)
    platform->display = XOpenDisplay(NULL);
    memset(platform->input.keyboard.keycodes, -1, sizeof(platform->input.keyboard.keycodes));
    pm_int32 min, max;
    XDisplayKeycodes(platform->display, &min, &max);
    pm_int32 width;
    KeySym *key_syms = XGetKeyboardMapping(platform->display, min, max - min + 1, &width);
    for (pm_int32 i = min; i < max; i++)
        platform->input.keyboard.keycodes[i] = pm_platform_translate_keysym(&key_syms[(i - min) * width], width);
    XFree(key_syms);
#else
    platform->input.keyboard.keycodes[0x00B] = PM_KEYCODE_0;
    platform->input.keyboard.keycodes[0x002] = PM_KEYCODE_1;
    platform->input.keyboard.keycodes[0x003] = PM_KEYCODE_2;
    platform->input.keyboard.keycodes[0x004] = PM_KEYCODE_3;
    platform->input.keyboard.keycodes[0x005] = PM_KEYCODE_4;
    platform->input.keyboard.keycodes[0x006] = PM_KEYCODE_5;
    platform->input.keyboard.keycodes[0x007] = PM_KEYCODE_6;
    platform->input.keyboard.keycodes[0x008] = PM_KEYCODE_7;
    platform->input.keyboard.keycodes[0x009] = PM_KEYCODE_8;
    platform->input.keyboard.keycodes[0x00A] = PM_KEYCODE_9;
    platform->input.keyboard.keycodes[0x01E] = PM_KEYCODE_A;
    platform->input.keyboard.keycodes[0x030] = PM_KEYCODE_B;
    platform->input.keyboard.keycodes[0x02E] = PM_KEYCODE_C;
    platform->input.keyboard.keycodes[0x020] = PM_KEYCODE_D;
    platform->input.keyboard.keycodes[0x012] = PM_KEYCODE_E;
    platform->input.keyboard.keycodes[0x021] = PM_KEYCODE_F;
    platform->input.keyboard.keycodes[0x022] = PM_KEYCODE_G;
    platform->input.keyboard.keycodes[0x023] = PM_KEYCODE_H;
    platform->input.keyboard.keycodes[0x017] = PM_KEYCODE_I;
    platform->input.keyboard.keycodes[0x024] = PM_KEYCODE_J;
    platform->input.keyboard.keycodes[0x025] = PM_KEYCODE_K;
    platform->input.keyboard.keycodes[0x026] = PM_KEYCODE_L;
    platform->input.keyboard.keycodes[0x032] = PM_KEYCODE_M;
    platform->input.keyboard.keycodes[0x031] = PM_KEYCODE_N;
    platform->input.keyboard.keycodes[0x018] = PM_KEYCODE_O;
    platform->input.keyboard.keycodes[0x019] = PM_KEYCODE_P;
    platform->input.keyboard.keycodes[0x010] = PM_KEYCODE_Q;
    platform->input.keyboard.keycodes[0x013] = PM_KEYCODE_R;
    platform->input.keyboard.keycodes[0x01F] = PM_KEYCODE_S;
    platform->input.keyboard.keycodes[0x014] = PM_KEYCODE_T;
    platform->input.keyboard.keycodes[0x016] = PM_KEYCODE_U;
    platform->input.keyboard.keycodes[0x02F] = PM_KEYCODE_V;
    platform->input.keyboard.keycodes[0x011] = PM_KEYCODE_W;
    platform->input.keyboard.keycodes[0x02D] = PM_KEYCODE_X;
    platform->input.keyboard.keycodes[0x015] = PM_KEYCODE_Y;
    platform->input.keyboard.keycodes[0x02C] = PM_KEYCODE_Z;
    platform->input.keyboard.keycodes[0x028] = PM_KEYCODE_APOSTROPHE;
    platform->input.keyboard.keycodes[0x02B] = PM_KEYCODE_BACKSLASH;
    platform->input.keyboard.keycodes[0x033] = PM_KEYCODE_COMMA;
    platform->input.keyboard.keycodes[0x00D] = PM_KEYCODE_EQUAL;
    platform->input.keyboard.keycodes[0x029] = PM_KEYCODE_ACCENT_GRAVE;
    platform->input.keyboard.keycodes[0x01A] = PM_KEYCODE_LEFT_SQUARE_BRACKET;
    platform->input.keyboard.keycodes[0x00C] = PM_KEYCODE_MINUS;
    platform->input.keyboard.keycodes[0x034] = PM_KEYCODE_PERIOD;
    platform->input.keyboard.keycodes[0x01B] = PM_KEYCODE_RIGHT_SQUARE_BRACKET;
    platform->input.keyboard.keycodes[0x027] = PM_KEYCODE_SEMICOLON;
    platform->input.keyboard.keycodes[0x035] = PM_KEYCODE_SLASH;
    platform->input.keyboard.keycodes[0x00E] = PM_KEYCODE_BACKSPACE;
    platform->input.keyboard.keycodes[0x153] = PM_KEYCODE_DELETE;
    platform->input.keyboard.keycodes[0x14F] = PM_KEYCODE_END;
    platform->input.keyboard.keycodes[0x01C] = PM_KEYCODE_ENTER;
    platform->input.keyboard.keycodes[0x001] = PM_KEYCODE_ESCAPE;
    platform->input.keyboard.keycodes[0x147] = PM_KEYCODE_HOME;
    platform->input.keyboard.keycodes[0x152] = PM_KEYCODE_INSERT;
    platform->input.keyboard.keycodes[0x15D] = PM_KEYCODE_MENU;
    platform->input.keyboard.keycodes[0x151] = PM_KEYCODE_PAGE_DOWN;
    platform->input.keyboard.keycodes[0x149] = PM_KEYCODE_PAGE_UP;
    platform->input.keyboard.keycodes[0x045] = PM_KEYCODE_PAUSE;
    platform->input.keyboard.keycodes[0x146] = PM_KEYCODE_PAUSE;
    platform->input.keyboard.keycodes[0x039] = PM_KEYCODE_SPACE;
    platform->input.keyboard.keycodes[0x00F] = PM_KEYCODE_TAB;
    platform->input.keyboard.keycodes[0x03A] = PM_KEYCODE_CAPS_LOCK;
    platform->input.keyboard.keycodes[0x145] = PM_KEYCODE_NUMPAD_NUM;
    platform->input.keyboard.keycodes[0x046] = PM_KEYCODE_SCROLL_LOCK;
    platform->input.keyboard.keycodes[0x03B] = PM_KEYCODE_F1;
    platform->input.keyboard.keycodes[0x03C] = PM_KEYCODE_F2;
    platform->input.keyboard.keycodes[0x03D] = PM_KEYCODE_F3;
    platform->input.keyboard.keycodes[0x03E] = PM_KEYCODE_F4;
    platform->input.keyboard.keycodes[0x03F] = PM_KEYCODE_F5;
    platform->input.keyboard.keycodes[0x040] = PM_KEYCODE_F6;
    platform->input.keyboard.keycodes[0x041] = PM_KEYCODE_F7;
    platform->input.keyboard.keycodes[0x042] = PM_KEYCODE_F8;
    platform->input.keyboard.keycodes[0x043] = PM_KEYCODE_F9;
    platform->input.keyboard.keycodes[0x044] = PM_KEYCODE_F10;
    platform->input.keyboard.keycodes[0x057] = PM_KEYCODE_F11;
    platform->input.keyboard.keycodes[0x058] = PM_KEYCODE_F12;
    platform->input.keyboard.keycodes[0x064] = PM_KEYCODE_F13;
    platform->input.keyboard.keycodes[0x065] = PM_KEYCODE_F14;
    platform->input.keyboard.keycodes[0x066] = PM_KEYCODE_F15;
    platform->input.keyboard.keycodes[0x067] = PM_KEYCODE_F16;
    platform->input.keyboard.keycodes[0x068] = PM_KEYCODE_F17;
    platform->input.keyboard.keycodes[0x069] = PM_KEYCODE_F18;
    platform->input.keyboard.keycodes[0x06A] = PM_KEYCODE_F19;
    platform->input.keyboard.keycodes[0x06B] = PM_KEYCODE_F20;
    platform->input.keyboard.keycodes[0x06C] = PM_KEYCODE_F21;
    platform->input.keyboard.keycodes[0x06D] = PM_KEYCODE_F22;
    platform->input.keyboard.keycodes[0x06E] = PM_KEYCODE_F23;
    platform->input.keyboard.keycodes[0x076] = PM_KEYCODE_F24;
    platform->input.keyboard.keycodes[0x038] = PM_KEYCODE_LEFT_ALT;
    platform->input.keyboard.keycodes[0x01D] = PM_KEYCODE_LEFT_CONTROL;
    platform->input.keyboard.keycodes[0x02A] = PM_KEYCODE_LEFT_SHIFT;
    platform->input.keyboard.keycodes[0x15B] = PM_KEYCODE_LEFT_META;
    platform->input.keyboard.keycodes[0x137] = PM_KEYCODE_PRINT_SCREEN;
    platform->input.keyboard.keycodes[0x138] = PM_KEYCODE_RIGHT_ALT;
    platform->input.keyboard.keycodes[0x11D] = PM_KEYCODE_RIGHT_CONTROL;
    platform->input.keyboard.keycodes[0x036] = PM_KEYCODE_RIGHT_SHIFT;
    platform->input.keyboard.keycodes[0x15C] = PM_KEYCODE_RIGHT_META;
    platform->input.keyboard.keycodes[0x150] = PM_KEYCODE_DOWN_ARROW;
    platform->input.keyboard.keycodes[0x14B] = PM_KEYCODE_LEFT_ARROW;
    platform->input.keyboard.keycodes[0x14D] = PM_KEYCODE_RIGHT_ARROW;
    platform->input.keyboard.keycodes[0x148] = PM_KEYCODE_UP_ARROW;
    platform->input.keyboard.keycodes[0x052] = PM_KEYCODE_NUMPAD_0;
    platform->input.keyboard.keycodes[0x04F] = PM_KEYCODE_NUMPAD_1;
    platform->input.keyboard.keycodes[0x050] = PM_KEYCODE_NUMPAD_2;
    platform->input.keyboard.keycodes[0x051] = PM_KEYCODE_NUMPAD_3;
    platform->input.keyboard.keycodes[0x04B] = PM_KEYCODE_NUMPAD_4;
    platform->input.keyboard.keycodes[0x04C] = PM_KEYCODE_NUMPAD_5;
    platform->input.keyboard.keycodes[0x04D] = PM_KEYCODE_NUMPAD_6;
    platform->input.keyboard.keycodes[0x047] = PM_KEYCODE_NUMPAD_7;
    platform->input.keyboard.keycodes[0x048] = PM_KEYCODE_NUMPAD_8;
    platform->input.keyboard.keycodes[0x049] = PM_KEYCODE_NUMPAD_9;
    platform->input.keyboard.keycodes[0x04E] = PM_KEYCODE_NUMPAD_ADD;
    platform->input.keyboard.keycodes[0x053] = PM_KEYCODE_NUMPAD_DECIMAL;
    platform->input.keyboard.keycodes[0x135] = PM_KEYCODE_NUMPAD_DIVIDE;
    platform->input.keyboard.keycodes[0x11C] = PM_KEYCODE_NUMPAD_ENTER;
    platform->input.keyboard.keycodes[0x059] = PM_KEYCODE_NUMPAD_EQUAL;
    platform->input.keyboard.keycodes[0x037] = PM_KEYCODE_NUMPAD_MULTIPLY;
    platform->input.keyboard.keycodes[0x04A] = PM_KEYCODE_NUMPAD_SUBTRACT;

    WNDCLASS window_class = {0};
    window_class.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    window_class.hCursor = LoadCursor(NULL, IDC_ARROW);
    //REVIEW: Might not be necessary, come back after OpenGL is implemented
    window_class.style = CS_HREDRAW | CS_VREDRAW;
    window_class.hInstance = GetModuleHandle(NULL);
    window_class.lpfnWndProc = pm_platform_event_handler;
    window_class.cbClsExtra = 0;
    window_class.cbWndExtra = 0;
    window_class.lpszMenuName = NULL;
    window_class.hbrBackground = NULL;
    //HACK: Colored here just for visuals
    window_class.hbrBackground = CreateSolidBrush(RGB(255, 0, 0));
    window_class.lpszClassName = "PM_ROOT";
    if (!RegisterClass(&window_class)) {
        printf("[FAIL] Failed to register root class!\n");
        return NULL;
    };
    //HACK: Colored here just for visuals
    window_class.hbrBackground = CreateSolidBrush(RGB(0, 0, 255));
    window_class.style = CS_HREDRAW | CS_VREDRAW | CS_PARENTDC;
    window_class.lpszClassName = "PM_CHILD";
    if (!RegisterClass(&window_class)) {
        printf("[FAIL] Failed to register child class!\n");
        return NULL;
    };
#endif

    platform->input.mouse.wheel_delta = 0;
    platform->input.mouse.position.x = 0;
    platform->input.mouse.position.y = 0;

    memset(platform->input.keyboard.map, 0, sizeof(platform->input.keyboard.map));
    memset(platform->input.keyboard.prev_map, 0, sizeof(platform->input.keyboard.prev_map));
    memset(platform->input.mouse.map, 0, sizeof(platform->input.mouse.map));
    memset(platform->input.mouse.map, 0, sizeof(platform->input.mouse.prev_map));

    pm_platform_set_key_callback(platform, pm_platform_key_callback_default);
    pm_platform_set_mouse_button_callback(platform, pm_platform_mouse_button_callback_default);
    pm_platform_set_mouse_motion_callback(platform, pm_platform_mouse_motion_callback_default);
    pm_platform_set_mouse_scroll_callback(platform, pm_platform_mouse_scroll_callback_default);
    pm_platform_set_window_motion_callback(platform, pm_platform_window_motion_callback_default);
    pm_platform_set_window_size_callback(platform, pm_platform_window_size_callback_default);
    printf("[OK] Platform init successful!\n");
    return platform;
};

void pm_platform_poll_events() {
    pm_platform *platform = pm_engine_get_subsystem(platform);
#if defined(PM_LINUX)
    XEvent xevent;
    while (XPending(platform->display)) {
        XNextEvent(platform->display, &xevent);
        pm_platform_event_handler(&xevent);
    };
#else
    MSG msg;
    while (PeekMessageW(&msg, NULL, 0, 0, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    };
#endif

    //HACK: Coords are bound to main window
    if (platform->input.mouse.locked) {
#if defined(PM_LINUX)
        pm_platform_mouse_set_position(pm_packed_array_get_ptr(platform->windows, 1)->width / 2,
                                       pm_packed_array_get_ptr(platform->windows, 1)->height / 2);
#else
        pm_vec2u pos = pm_platform_window_get_size(1);
        pm_platform_mouse_set_position(pos.x/2, pos.y/2);
#endif
    };
};

#if defined(PM_LINUX)

void pm_platform_event_handler(XEvent *xevent) {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    pm_uint64 handle = xevent->xany.window;
    pm_id id = -1;

    for (pm_uint32 i = 0; i < pm_packed_array_get_count(platform->windows); i++)
        if (platform->windows->elements[i].handle == handle)
            id = platform->windows->elements[i].id;

    switch (xevent->type) {
        case KeyPress: {
            pm_key_map key = platform->input.keyboard.keycodes[xevent->xkey.keycode];
            platform->callbacks.pm_platform_key_callback(id, key, PM_EVENT_KEY_PRESS);
            break;
        };
        case KeyRelease: {
            pm_key_map key = platform->input.keyboard.keycodes[xevent->xkey.keycode];
            platform->callbacks.pm_platform_key_callback(id, key, PM_EVENT_KEY_RELEASE);
            break;
        };
        case ButtonPress: {
            pm_mouse_map button = pm_platform_translate_button(xevent->xbutton.button);
            if (button == PM_MOUSE_BUTTON_INVALID) {
                if (xevent->xbutton.button == 4) {
                    platform->callbacks.pm_platform_mouse_scroll_callback(id, PM_EVENT_MOUSE_SCROLL_UP);
                    break;
                };
                if (xevent->xbutton.button == 5) {
                    platform->callbacks.pm_platform_mouse_scroll_callback(id, PM_EVENT_MOUSE_SCROLL_DOWN);
                    break;
                };
            };
            platform->callbacks.pm_platform_mouse_button_callback(id, button, PM_EVENT_MOUSE_BUTTON_PRESS);
            break;
        };
        case ButtonRelease: {
            pm_mouse_map button = pm_platform_translate_button(xevent->xbutton.button);
            platform->callbacks.pm_platform_mouse_button_callback(id, button, PM_EVENT_MOUSE_BUTTON_RELEASE);
            break;
        };
        case MotionNotify: {
            platform->callbacks.pm_platform_mouse_motion_callback(id, xevent->xbutton.x, xevent->xbutton.y,
                                                                  PM_EVENT_MOUSE_MOTION);
            break;
        };
        case ConfigureNotify: {
            pm_window *window = pm_packed_array_get_ptr(platform->windows, id);
            if (window->height != xevent->xconfigure.height || window->width != xevent->xconfigure.width) {
                platform->callbacks.pm_platform_window_size_callback(id, xevent->xconfigure.width,
                                                                     xevent->xconfigure.height, PM_EVENT_WINDOW_SIZE);
            };
            if (window->x != xevent->xconfigure.x || window->y != xevent->xconfigure.y) {
                platform->callbacks.pm_platform_window_motion_callback(id, xevent->xconfigure.x, xevent->xconfigure.y,
                                                                       PM_EVENT_WINDOW_MOTION);
            };
            break;
        };
        case DestroyNotify: {
            printf("Destroying window %d!\n", id);
            pm_packed_array_erase(platform->windows, id);

            pm_bool check_no_root = true;
            for (pm_int32 i = 0; i < pm_packed_array_get_count(platform->windows); i++)
                if (platform->windows->elements[i].parent == PM_WINDOW_DEFAULT_PARENT) {
                    printf("check no root false");
                    check_no_root = false;
                    break;
                };

            if (check_no_root) pm_engine_get_instance()->is_running = false;
            break;
        };
        case ClientMessage: {
            if (xevent->xclient.data.l[0] == XInternAtom(platform->display, "WM_DELETE_WINDOW", false)) {
                XUnmapWindow(platform->display, handle);
                XDestroyWindow(platform->display, handle);
            };
            break;
        };
        default:
            break;
    };
};
#else
LRESULT CALLBACK pm_platform_event_handler(HWND handle, pm_uint32 event, WPARAM wparam, LPARAM lparam) {
pm_platform *platform = pm_engine_get_subsystem(platform);
pm_uint64 window_handle = (pm_uint64) handle;
pm_id id = -1;

for (pm_uint32 i = 0; i < pm_packed_array_get_count(platform->windows); i++)
if (platform->windows->elements[i].handle == window_handle)
id = platform->windows->elements[i].id;

switch (event) {
case WM_KEYDOWN: {
pm_key_map key = platform->input.keyboard.keycodes[(HIWORD(lparam) & (KF_EXTENDED | 0xff))];
platform->callbacks.pm_platform_key_callback(id, key, PM_EVENT_KEY_PRESS);
break;
};
case WM_KEYUP: {
pm_key_map key = platform->input.keyboard.keycodes[(HIWORD(lparam) & (KF_EXTENDED | 0xff))];
platform->callbacks.pm_platform_key_callback(id, key, PM_EVENT_KEY_RELEASE);
break;
};
case WM_LBUTTONDOWN: {
platform->callbacks.pm_platform_mouse_button_callback(id, PM_MOUSE_BUTTON_LEFT, PM_EVENT_MOUSE_BUTTON_PRESS);
break;
};
case WM_LBUTTONUP: {
platform->callbacks.pm_platform_mouse_button_callback(id, PM_MOUSE_BUTTON_LEFT, PM_EVENT_MOUSE_BUTTON_RELEASE);
break;
};
case WM_MBUTTONDOWN: {
platform->callbacks.pm_platform_mouse_button_callback(id, PM_MOUSE_BUTTON_MIDDLE, PM_EVENT_MOUSE_BUTTON_PRESS);
break;
};
case WM_MBUTTONUP: {
platform->callbacks.pm_platform_mouse_button_callback(id, PM_MOUSE_BUTTON_MIDDLE, PM_EVENT_MOUSE_BUTTON_RELEASE);
break;
};
case WM_RBUTTONDOWN: {
platform->callbacks.pm_platform_mouse_button_callback(id, PM_MOUSE_BUTTON_RIGHT, PM_EVENT_MOUSE_BUTTON_PRESS);
break;
};
case WM_RBUTTONUP: {
platform->callbacks.pm_platform_mouse_button_callback(id, PM_MOUSE_BUTTON_RIGHT, PM_EVENT_MOUSE_BUTTON_RELEASE);
break;
};
case WM_MOUSEWHEEL: {
++platform->input.mouse.wheel_delta;
break;
};
case WM_MOUSEMOVE: {
platform->callbacks.pm_platform_mouse_motion_callback(id, LOWORD(lparam), HIWORD(lparam), PM_EVENT_MOUSE_MOTION);
break;
};
case WM_GETMINMAXINFO: {
MINMAXINFO *info = (MINMAXINFO*)lparam;
info->ptMinTrackSize.x = 1;
info->ptMinTrackSize.y = 1;
break;
};
case WM_SIZE: {
if (pm_packed_array_has(platform->windows, id))
platform->callbacks.pm_platform_window_size_callback(id, LOWORD(lparam), HIWORD(lparam), PM_EVENT_WINDOW_SIZE);
break;
};
case WM_MOVE: {
if (pm_packed_array_has(platform->windows, id))
platform->callbacks.pm_platform_window_motion_callback(id, LOWORD(lparam), HIWORD(lparam), PM_EVENT_WINDOW_MOTION);
break;
};
case WM_DESTROY: {
printf("Destroying window %d!\n", id);
pm_packed_array_erase(platform->windows, id)

pm_bool check_no_root = true;
for (pm_int32 i = 0; i < pm_packed_array_get_count(platform->windows); i++)
if (platform->windows->elements[i].parent == PM_WINDOW_DEFAULT_PARENT) {
printf("check no root false\n");
check_no_root = false;
break;
};

if (check_no_root) pm_engine_get_instance()->is_running = false;
break;
};
default: break;
};
return DefWindowProc(handle, event, wparam, lparam);
};
#endif

void pm_platform_update(pm_platform *platform) {
    memcpy(platform->input.mouse.prev_map, platform->input.mouse.map, sizeof(platform->input.mouse.map));
    memcpy(platform->input.keyboard.prev_map, platform->input.keyboard.map, sizeof(platform->input.keyboard.map));
    platform->input.mouse.wheel_delta = 0;
    platform->input.mouse.moved = false;
    platform->input.mouse.delta.x = 0.0f;
    platform->input.mouse.delta.y = 0.0f;
    pm_platform_poll_events();
};

void pm_platform_terminate(pm_platform *platform) {
    if (platform->input.mouse.locked) pm_platform_mouse_lock(false);
    for (pm_int32 i = 0; i < pm_packed_array_get_count(platform->windows); i++)
        pm_platform_window_destroy(platform->windows->elements[i].id);
#if defined(PM_LINUX)
    //This sends the proper closing xevents
    pm_platform_update(pm_engine_get_subsystem(platform));
#else
    UnregisterClass(PM_ROOT_WIN_CLASS, GetModuleHandle(NULL));
    UnregisterClass(PM_CHILD_WIN_CLASS, GetModuleHandle(NULL));
#endif

    pm_packed_array_destroy(platform->windows);
    pm_free(platform);
};

void pm_platform_key_press(pm_key_map key) {
    if (key >= PM_KEYCODE_COUNT) return;
    pm_platform *platform = pm_engine_get_subsystem(platform);
    platform->input.keyboard.map[key] = true;
};

void pm_platform_key_release(pm_key_map key) {
    if (key >= PM_KEYCODE_COUNT) return;
    pm_platform *platform = pm_engine_get_subsystem(platform);
    platform->input.keyboard.map[key] = false;
};

pm_bool pm_platform_key_pressed(pm_key_map key) {
    if (key >= PM_KEYCODE_COUNT) return false;
    pm_platform *platform = pm_engine_get_subsystem(platform);
    return platform->input.keyboard.map[key] && !platform->input.keyboard.prev_map[key];
};

pm_bool pm_platform_key_down(pm_key_map key) {
    if (key >= PM_KEYCODE_COUNT) return false;
    pm_platform *platform = pm_engine_get_subsystem(platform);
    return platform->input.keyboard.map[key] && platform->input.keyboard.prev_map[key];
};

pm_bool pm_platform_key_released(pm_key_map key) {
    if (key >= PM_KEYCODE_COUNT) return false;
    pm_platform *platform = pm_engine_get_subsystem(platform);
    return !platform->input.keyboard.map[key] && platform->input.keyboard.prev_map[key];
};

pm_bool pm_platform_key_up(pm_key_map key) {
    if (key >= PM_KEYCODE_COUNT) return false;
    pm_platform *platform = pm_engine_get_subsystem(platform);
    return !platform->input.keyboard.map[key];
};

void pm_platform_mouse_button_press(pm_mouse_map button) {
    if (button >= PM_MOUSE_BUTTON_COUNT) return;
    pm_platform *platform = pm_engine_get_subsystem(platform);
    platform->input.mouse.map[button] = true;
};

void pm_platform_mouse_button_release(pm_mouse_map button) {
    if (button >= PM_MOUSE_BUTTON_COUNT) return;
    pm_platform *platform = pm_engine_get_subsystem(platform);
    platform->input.mouse.map[button] = false;

};

pm_bool pm_platform_mouse_button_pressed(pm_mouse_map button) {
    if (button >= PM_MOUSE_BUTTON_COUNT) return false;
    pm_platform *platform = pm_engine_get_subsystem(platform);
    return platform->input.mouse.map[button] && !platform->input.mouse.prev_map[button];
};

pm_bool pm_platform_mouse_button_down(pm_mouse_map button) {
    if (button >= PM_MOUSE_BUTTON_COUNT) return false;
    pm_platform *platform = pm_engine_get_subsystem(platform);
    return platform->input.mouse.map[button] && platform->input.mouse.prev_map[button];
};

pm_bool pm_platform_mouse_button_released(pm_mouse_map button) {
    if (button >= PM_MOUSE_BUTTON_COUNT) return false;
    pm_platform *platform = pm_engine_get_subsystem(platform);
    return !platform->input.mouse.map[button] && platform->input.mouse.prev_map[button];
};

pm_bool pm_platform_mouse_button_up(pm_mouse_map button) {
    if (button >= PM_MOUSE_BUTTON_COUNT) return false;
    pm_platform *platform = pm_engine_get_subsystem(platform);
    return !platform->input.mouse.map[button];
};

void pm_platform_mouse_get_position(pm_uint32 *x, pm_uint32 *y) {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    *x = platform->input.mouse.position.x;
    *y = platform->input.mouse.position.y;
};

pm_vec2 pm_platform_mouse_get_positionv() {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    pm_vec2 posv;
    posv.x = (pm_float32) platform->input.mouse.position.x;
    posv.y = (pm_float32) platform->input.mouse.position.y;
    return posv;
};

void pm_platform_mouse_set_position(pm_uint32 x, pm_uint32 y) {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    platform->input.mouse.position.x = x;
    platform->input.mouse.position.y = y;

#if defined(PM_LINUX)
    XWarpPointer(platform->display, None, pm_packed_array_get_ptr(platform->windows, 1)->handle, 0, 0, 0, 0,
                 (pm_int32) x, (pm_int32) y);
    XFlush(platform->display);
#else
    POINT pos = { (pm_int32)x, (pm_int32)y};
    //HACK:
    ClientToScreen((HWND)pm_packed_array_get_ptr(platform->windows, 1)->handle, &pos);
    SetCursorPos(pos.x, pos.y);
#endif
};

pm_vec2 pm_platform_mouse_get_delta() {
    return pm_engine_get_subsystem(platform)->input.mouse.delta;
};

pm_int32 pm_platform_mouse_get_wheel_delta() {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    return platform->input.mouse.wheel_delta;
};

pm_bool pm_platform_mouse_moved() {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    return platform->input.mouse.moved;
};

void pm_platform_mouse_lock(pm_bool lock) {
    pm_platform *platform = pm_engine_get_subsystem(platform);

    if (platform->input.mouse.locked == lock) return;
    //HACK: Grabs main window but you should be able to specify this
    pm_window *window_to_lock = pm_packed_array_get_ptr(platform->windows, 1);
#if defined(PM_LINUX)
    if (lock) {
        platform->input.mouse.locked = lock;
        pm_platform_mouse_get_position(&platform->input.mouse.cached_position.x,
                                       &platform->input.mouse.cached_position.y);
        XGrabPointer(platform->display, window_to_lock->handle, true,
                     ButtonPressMask | ButtonReleaseMask | PointerMotionMask,
                     GrabModeAsync, GrabModeAsync, window_to_lock->handle, 0, 0
        );
    } else {
        platform->input.mouse.locked = lock;
        XUngrabPointer(platform->display, 0);
        pm_platform_mouse_set_position(platform->input.mouse.cached_position.x,
                                       platform->input.mouse.cached_position.y);
    };
#else
    if (lock) {
        platform->input.mouse.locked = lock;
        pm_platform_mouse_get_position(&platform->input.mouse.cached_position.x, &platform->input.mouse.cached_position.y);
        RECT clipRect;
        GetClientRect((HWND)window_to_lock->handle, &clipRect);
        ClientToScreen((HWND)window_to_lock->handle, (POINT*) &clipRect.left);
        ClientToScreen((HWND)window_to_lock->handle, (POINT*) &clipRect.right);
        ClipCursor(&clipRect);
    } else {
        platform->input.mouse.locked = lock;
        ClipCursor(NULL);
        pm_platform_mouse_set_position(platform->input.mouse.cached_position.x, platform->input.mouse.cached_position.y);
    }
#endif

};

void pm_platform_key_callback_default(pm_id id, pm_key_map key, pm_platform_events event) {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    switch (event) {
        case PM_EVENT_KEY_PRESS: {
            platform->input.keyboard.map[key] = true;
            break;
        };
        case PM_EVENT_KEY_RELEASE: {
            platform->input.keyboard.map[key] = false;
            break;
        };
        default:
            break;
    };
};

void pm_platform_mouse_button_callback_default(pm_id id, pm_mouse_map button, pm_platform_events event) {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    switch (event) {
        case PM_EVENT_MOUSE_BUTTON_PRESS: {
            platform->input.mouse.map[button] = true;
            break;
        };
        case PM_EVENT_MOUSE_BUTTON_RELEASE: {
            platform->input.mouse.map[button] = false;
            break;
        };
        default:
            break;
    };
};

void pm_platform_mouse_motion_callback_default(pm_id id, pm_int32 x, pm_int32 y, pm_platform_events event) {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    if (!platform->input.mouse.locked) {
        platform->input.mouse.moved = true;
        platform->input.mouse.delta.x = (pm_float32) (x - platform->input.mouse.position.x);
        platform->input.mouse.delta.y = (pm_float32) (y - platform->input.mouse.position.y);
        platform->input.mouse.position.x = x;
        platform->input.mouse.position.y = y;
    } else {
        //REVIEW: For some reason switching to (pm_float32)(x - platform->input.mouse.position.x) breaks stuff?
        pm_float32 dx = (pm_float32) x - (pm_float32) platform->input.mouse.position.x;
        pm_float32 dy = (pm_float32) y - (pm_float32) platform->input.mouse.position.y;
        platform->input.mouse.position.x = x;
        platform->input.mouse.position.y = y;
        platform->input.mouse.delta = pm_vec2_add(platform->input.mouse.delta, pm_vec2_create(dx, dy));
    };
};

void pm_platform_mouse_scroll_callback_default(pm_id id, pm_platform_events event) {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    switch (event) {
        case PM_EVENT_MOUSE_SCROLL_UP: {
            ++platform->input.mouse.wheel_delta;
            break;
        };
        case PM_EVENT_MOUSE_SCROLL_DOWN: {
            --platform->input.mouse.wheel_delta;
            break;
        };
        default:
            break;
    };
};

void pm_platform_window_size_callback_default(pm_id id, pm_uint32 width, pm_uint32 height, pm_platform_events event) {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    pm_window *window = pm_packed_array_get_ptr(platform->windows, id);
    if (!window) {
        printf("[FAIL] pm_platform_window_size_callback_default: Window not found on size callback!\n");
        return;
    };

    window->cache.width = window->width;
    window->cache.height = window->height;
    window->width = width;
    window->height = height;
    printf("Window size callback: %d %d\n", width, height);
};

void pm_platform_window_motion_callback_default(pm_id id, pm_uint32 x, pm_uint32 y, pm_platform_events event) {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    pm_window *window = pm_packed_array_get_ptr(platform->windows, id);
    if (!window) {
        printf("[FAIL] pm_platform_window_motion_callback_default: Window not found on motion callback!\n");
        return;
    };
    window->cache.x = window->x;
    window->cache.y = window->y;
    window->x = x;
    window->y = y;
    printf("Window pos callback: %d %d\n", x, y);
};

pm_id pm_platform_window_create(pm_window_info window_info) {
    pm_platform *platform = pm_engine_get_subsystem(platform);

    pm_window *new_window = (pm_window *) pm_malloc(sizeof(pm_window));
    if (new_window == NULL) {
        printf("[FAIL] pm_platform_window_create (id: %u): Could not allocate memory for window!\n",
               platform->windows->next_id);
        return PM_PA_INVALID_ID;
    };

    pm_id ret_id = pm_packed_array_add(platform->windows, *new_window);
    pm_free(new_window);
    new_window = pm_packed_array_get_ptr(platform->windows, ret_id);
    new_window->id = ret_id;

    //Defaults
    if (!window_info.x) {
        window_info.x = PM_WINDOW_DEFAULT_X;
        printf("[WARN] pm_platform_window_create (id: %u): info.x is 0, setting to default (%d)!\n", ret_id,
               PM_WINDOW_DEFAULT_X);
    };
    if (!window_info.y) {
        window_info.y = PM_WINDOW_DEFAULT_Y;
        printf("[WARN] pm_platform_window_create (id: %u): info.y is 0, setting to default (%d)!\n", ret_id,
               PM_WINDOW_DEFAULT_Y);
    }
    if (!window_info.width) {
        window_info.width = PM_WINDOW_DEFAULT_WIDTH;
        printf("[WARN] pm_platform_window_create (id: %u): info.width is 0, setting to default (%d)!\n", ret_id,
               PM_WINDOW_DEFAULT_WIDTH);
    }
    if (!window_info.height) {
        window_info.height = PM_WINDOW_DEFAULT_HEIGHT;
        printf("[WARN] pm_platform_window_create (id: %u): info.height is 0, setting to default (%d)!\n", ret_id,
               PM_WINDOW_DEFAULT_HEIGHT);
    }
    if (!strlen(window_info.name)) {
        snprintf(window_info.name, PM_MAX_NAME_LENGTH, "%s%d", PM_WINDOW_DEFAULT_NAME, ret_id);
        printf("[WARN] pm_platform_window_create (id: %u): info.name is empty, setting default name (%s)!\n", ret_id,
               window_info.name);
    };
    if (!window_info.parent) {
        window_info.parent = PM_WINDOW_DEFAULT_PARENT;
        printf("[WARN] pm_platform_window_create (id: %u): info.parent is 0, setting default parent (%lu)!\n", ret_id,
               PM_WINDOW_DEFAULT_PARENT);
    };
    if (!window_info.is_fullscreen) {
        window_info.is_fullscreen = false;
    };


#if defined(PM_LINUX)
    XSetWindowAttributes window_attributes;
    pm_int32 attribs[] = {GLX_RGBA, GLX_DEPTH_SIZE, 24, GLX_DOUBLEBUFFER, None};
    new_window->visual_info = glXChooseVisual(platform->display, 0, attribs);
    new_window->colormap = XCreateColormap(platform->display, window_info.parent, new_window->visual_info->visual,
                                           AllocNone);
    window_attributes.colormap = new_window->colormap;
    window_attributes.event_mask =
            ExposureMask | KeyPressMask | KeyReleaseMask | ButtonPressMask | ButtonReleaseMask | PointerMotionMask |
            FocusChangeMask | StructureNotifyMask | EnterWindowMask | LeaveWindowMask;
    pm_uint64 window = (pm_uint64) XCreateWindow(platform->display, window_info.parent,
                                                 (pm_int32) window_info.x, (pm_int32) window_info.y,
                                                 window_info.width, window_info.height, 0,
                                                 new_window->visual_info->depth, InputOutput,
                                                 new_window->visual_info->visual, CWColormap | CWEventMask,
                                                 &window_attributes
    );
    if (window == BadAlloc || window == BadColor || window == BadCursor || window == BadMatch || window == BadPixmap ||
        window == BadValue || window == BadWindow) {
        printf("[FAIL] pm_platform_window_create (id: %u): Could not create window!\n", ret_id);
        pm_packed_array_erase(platform->windows, ret_id);
        return PM_PA_INVALID_ID;
    };
    new_window->handle = window;

    Atom wm_delete = XInternAtom(platform->display, "WM_DELETE_WINDOW", true);
    XSetWMProtocols(platform->display, (Window) new_window->handle, &wm_delete, 1);
    XStoreName(platform->display, (Window) new_window->handle, window_info.name);
    XMapWindow(platform->display, (Window) new_window->handle);

#else
    DWORD dwExStyle = WS_EX_LEFT; // 0
    DWORD dwStyle = WS_OVERLAPPED; // 0
    if (window_info.parent == PM_WINDOW_DEFAULT_PARENT) {
        dwStyle = WS_CAPTION | WS_SYSMENU | WS_VISIBLE | WS_THICKFRAME;
        dwExStyle = WS_EX_APPWINDOW | WS_EX_WINDOWEDGE;
    };

    RECT window_rect = {
            .left = 0,
            .right = (long)window_info.width,
            .top = 0,
            .bottom = (long)window_info.height
    };
    AdjustWindowRectEx(&window_rect, dwStyle, false, dwExStyle);
    pm_int32 rect_width = window_rect.right - window_rect.left;
    pm_int32 rect_height = window_rect.bottom - window_rect.top;

    new_window->handle = (pm_uint64)CreateWindowEx(dwExStyle, window_info.parent == PM_WINDOW_DEFAULT_PARENT ? PM_ROOT_WIN_CLASS:PM_CHILD_WIN_CLASS,
                                                   window_info.name, dwStyle, (pm_int32)window_info.x, (pm_int32)window_info.y, rect_width, rect_height,
                                                   NULL, NULL, GetModuleHandle(NULL), NULL
    );
    if (new_window->handle == 0) {
        printf("[FAIL] pm_platform_window_create (id: %u): Could not create window!\n", new_window->id);
        return PM_PA_INVALID_ID;
    };
    if ((window_info.parent != PM_WINDOW_DEFAULT_PARENT)) {
        SetParent((HWND)new_window->handle, (HWND)window_info.parent);
        SetWindowLong((HWND)new_window->handle, GWL_STYLE, 0);
    };
    ShowWindow((HWND)new_window->handle, 1);
#endif

    new_window->x = window_info.x;
    new_window->y = window_info.y;
    //This is set to false due to how the is_fullscreen toggle works, it will be correctly assigned after pm_platform_window_fullscreen
    new_window->is_fullscreen = false;
    new_window->parent = window_info.parent;
    new_window->height = window_info.height;
    new_window->width = window_info.width;
    snprintf(new_window->name, PM_MAX_NAME_LENGTH, "%s", window_info.name);
    pm_platform_window_fullscreen(new_window->id, window_info.is_fullscreen);


    //REVIEW: Once main window is deleted, cannot create new ones?
    //REVIEW: Should all windows share contexts?
    pm_window *main_window = pm_packed_array_get_ptr(platform->windows, 1);
#if defined(PM_LINUX)
    new_window->context = NULL;
    new_window->context = glXCreateContext(platform->display, new_window->visual_info, main_window->context, GL_TRUE);
    glXMakeCurrent(platform->display, new_window->handle, new_window->context);
#else
    new_window->hdc = GetDC((HWND)new_window->handle);
    PIXELFORMATDESCRIPTOR pixel_format_desc = {
            sizeof(PIXELFORMATDESCRIPTOR),1,
            PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER, PFD_TYPE_RGBA,
            32,0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0,
            24,8,0, PFD_MAIN_PLANE, 0, 0, 0, 0
    };

    pm_int32 suggested_pf_index = ChoosePixelFormat(new_window->hdc, &pixel_format_desc);
    PIXELFORMATDESCRIPTOR suggested_pf;
    DescribePixelFormat(new_window->hdc, suggested_pf_index, sizeof(suggested_pf), &suggested_pf);
    SetPixelFormat(new_window->hdc, suggested_pf_index, &suggested_pf);

    new_window->context = wglCreateContext(new_window->hdc);
    wglMakeCurrent(new_window->hdc, new_window->context);
    wglShareLists(new_window->context, main_window->context);
#endif

    //Have to do this here unfortunately
    if (pm_packed_array_get_count(platform->windows) <= 1)
        if (!gladLoadGL())
            printf("[FAIL] pm_platform_window_create (id: %u): Could not load OpenGL functions!\n", new_window->id);

    amgl_vsync(new_window->id, pm_engine_get_instance()->vsync_enabled);

#if defined(PM_LINUX)
    glXMakeCurrent(platform->display, 0, 0);
#else
    wglMakeCurrent(0,0);
#endif
    return ret_id;
};

void pm_platform_window_resize(pm_id id, pm_uint32 width, pm_uint32 height) {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    pm_window *window = pm_packed_array_get_ptr(platform->windows, id);
    if (!window) {
        printf("[FAIL] pm_platform_window_resize (id: %u): Window id is invalid!\n", id);
        return;
    };
    window->cache.width = window->width;
    window->cache.height = window->height;
#if defined(PM_LINUX)
    XResizeWindow(platform->display, window->handle, width, height);
#else
    RECT rect = {
            .left = 0,
            .top = 0,
            .bottom = (long)window->height,
            .right = (long)window->width
    };
    if (window->parent == PM_WINDOW_DEFAULT_PARENT)
        AdjustWindowRectEx(&rect, WS_CAPTION | WS_SYSMENU | WS_VISIBLE | WS_THICKFRAME, false, WS_EX_APPWINDOW | WS_EX_WINDOWEDGE);
    else
        AdjustWindowRectEx(&rect, 0, false, 0);

    SetWindowPos((HWND)window->handle, 0, 0, 0 , rect.right - rect.left, rect.bottom - rect.top, SWP_NOZORDER | SWP_NOMOVE | SWP_FRAMECHANGED);
#endif
};

void pm_platform_window_move(pm_id id, pm_uint32 x, pm_uint32 y) {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    pm_window *window = pm_packed_array_get_ptr(platform->windows, id);
    if (!window) {
        printf("[FAIL] pm_platform_window_move (id: %u): Window id is invalid!\n", id);
        return;
    };
    window->cache.x = window->x;
    window->cache.y = window->y;

#if defined(PM_LINUX)
    XMoveWindow(platform->display, window->handle, (pm_int32) x, (pm_int32) y);
#else
    RECT rect = {
            .left = (long)x,
            .top = (long)y,
            .bottom = (long)window->height,
            .right = (long)window->width
    };
    if (window->parent == PM_WINDOW_DEFAULT_PARENT)
        AdjustWindowRectEx(&rect, WS_CAPTION | WS_SYSMENU | WS_VISIBLE | WS_THICKFRAME, false, WS_EX_APPWINDOW | WS_EX_WINDOWEDGE);
    else
        AdjustWindowRectEx(&rect, 0, false, 0);
    SetWindowPos((HWND)window->handle, 0, rect.left, rect.top, 0, 0, SWP_NOZORDER | SWP_NOSIZE | SWP_FRAMECHANGED);
#endif
};

//IDEA: Child windows could go "is_fullscreen" by taking the parent's client dimensions
void pm_platform_window_fullscreen(pm_id id, pm_bool state) {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    pm_window *window = pm_packed_array_get_ptr(platform->windows, id);
    printf("at fs %d\n", window->width);
    if (!window) {
        printf("[FAIL] pm_platform_window_fullscreen (id: %u): Window id is invalid!\n", id);
        return;
    };
    if (window->is_fullscreen == state || window->parent != PM_WINDOW_DEFAULT_PARENT) return;

    //From here the state has changed, and it is a main window
    window->cache.is_fullscreen = window->is_fullscreen;
    window->is_fullscreen = state;
    pm_window_info temp_info = {
            .width = window->width,
            .height = window->height,
            .x = window->x,
            .y = window->y,
            .is_fullscreen = window->is_fullscreen,
            .parent = window->parent,
    };
    snprintf(temp_info.name, PM_MAX_NAME_LENGTH, "%s", window->name);
    //REVIEW: Currently not needed for linux
#if defined(PM_WINDOWS)
    pm_window_cache temp_cache = window->cache;
#endif

#if defined(PM_LINUX)
    Atom wm_state = XInternAtom(platform->display, "_NET_WM_STATE", false);
    Atom wm_fs = XInternAtom(platform->display, "_NET_WM_STATE_FULLSCREEN", false);
    XEvent xevent = {0};
    xevent.type = ClientMessage;
    xevent.xclient.window = window->handle;
    xevent.xclient.message_type = wm_state;
    xevent.xclient.format = 32;
    xevent.xclient.data.l[0] = state ? 1 : 0;
    xevent.xclient.data.l[1] = (long) wm_fs;
    xevent.xclient.data.l[3] = 0l;
    XSendEvent(platform->display, PM_WINDOW_DEFAULT_PARENT, false, SubstructureRedirectMask | SubstructureNotifyMask,
               &xevent);
    XFlush(platform->display);
    XWindowAttributes window_attribs = {0};
    XGetWindowAttributes(platform->display, window->handle, &window_attribs);
    printf("Fullscreen toggle\n Pos: %d %d\n Size: %d %d\nFullscreen toggle end\n\n", window_attribs.x,
           window_attribs.y, window_attribs.width, window_attribs.height);
    memcpy(&window->cache, &temp_info, sizeof(pm_window_info));
#else
    DWORD dw_style = GetWindowLong((HWND)window->handle, GWL_STYLE);
    if (window->is_fullscreen) {
        printf("Going fullscreen\n");
        MONITORINFO monitor_info = {sizeof(monitor_info)};
        GetMonitorInfo(MonitorFromWindow((HWND)window->handle, MONITOR_DEFAULTTONEAREST), &monitor_info);
        SetWindowLong((HWND)window->handle, GWL_STYLE, dw_style & ~WS_OVERLAPPEDWINDOW);
        SetWindowPos((HWND)window->handle, HWND_TOP, monitor_info.rcMonitor.left, monitor_info.rcMonitor.top,
                monitor_info.rcMonitor.right - monitor_info.rcMonitor.left, monitor_info.rcMonitor.bottom - monitor_info.rcMonitor.top,
                SWP_NOOWNERZORDER | SWP_FRAMECHANGED
        );
        memcpy(&window->cache, &temp_info, sizeof(pm_window_info));
    } else {
        printf("Going not is_fullscreen\n");
        SetWindowLong((HWND)window->handle, GWL_STYLE, dw_style | WS_OVERLAPPEDWINDOW);
        pm_platform_window_resize(id, temp_cache.width, temp_cache.height);
        pm_platform_window_move(id, temp_cache.x, temp_cache.y);
    };
#endif
};

pm_vec2u pm_platform_window_get_size(pm_id id) {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    pm_window *window = pm_packed_array_get_ptr(platform->windows, id);
#if defined(PM_LINUX)
#else
    RECT area;
    GetClientRect((HWND)window->handle, &area);
    pm_vec2u ret = {area.right, area.bottom};
    return ret;
#endif
};

void pm_platform_window_destroy(pm_id id) {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    pm_window *window = pm_packed_array_get_ptr(platform->windows, id);
    if (!window) {
        printf("[FAIL] pm_platform_window_destroy (id: %u): Window id is invalid!\n", id);
        return;
    };
#if defined(PM_LINUX)
    glXDestroyContext(platform->display, window->context);
    XUnmapWindow(platform->display, window->handle);
    XDestroyWindow(platform->display, window->handle);
    XFreeColormap(platform->display, window->colormap);
    XFree(window->visual_info);
    XFlush(platform->display);
#else
    DestroyWindow((HWND)(window->handle));
#endif
};

void pm_platform_timer_create() {
    pm_platform *platform = pm_engine_get_subsystem(platform);
#if defined(PM_LINUX)
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    platform->time.offset = (pm_uint64) ts.tv_sec * (pm_uint64) 1000000000 + (pm_uint64) ts.tv_nsec;

    platform->time.frequency = 1000000000;
#else
    QueryPerformanceFrequency((LARGE_INTEGER*)&platform->time.frequency);
    QueryPerformanceCounter((LARGE_INTEGER*)&platform->time.offset);
#endif
};

void pm_platform_timer_sleep(pm_float32 ms) {
#if defined(PM_LINUX)
    usleep((__useconds_t) (ms * 1000.0f));
#else
    timeBeginPeriod(1);
    Sleep((uint64_t)ms);
    timeEndPeriod(1);
#endif
};

pm_uint64 pm_platform_timer_value() {
#if defined(PM_LINUX)
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (pm_uint64) ts.tv_sec * (pm_uint64) 1000000000 + (pm_uint64) ts.tv_nsec;
#else
    pm_uint64 value;
    QueryPerformanceCounter((LARGE_INTEGER*)&value);
    return value;
#endif
};

pm_uint64 pm_platform_elapsed_time() {
    pm_platform *platform = pm_engine_get_subsystem(platform);
    return (pm_platform_timer_value() - platform->time.offset);
};

//----------------------------------------------------------------------------//
//                              END PLATFORM IMPL                             //
//----------------------------------------------------------------------------//
