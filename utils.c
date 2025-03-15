#include "utils.h"

long get_filesize(FILE* f) {
    int fs;
    fseek(f, 0, SEEK_END);
    fs = ftell(f);
    rewind(f);
    return fs;
}

void keypress(BYTE key) {
    PostMessage(pw_hwnd, WM_KEYDOWN, key, 0);
    Sleep(10);
    PostMessage(pw_hwnd, WM_KEYUP, key, 0);
}
