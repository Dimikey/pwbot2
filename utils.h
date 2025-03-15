#include <windows.h>
#include <stdio.h>

#define BOOL    unsigned char
#define TRUE    1
#define FALSE   0

extern HWND pw_hwnd;

long get_filesize(FILE* f);
void keypress(BYTE key);
