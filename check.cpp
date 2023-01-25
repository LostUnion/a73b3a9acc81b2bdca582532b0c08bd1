#include <iostream>
#include <fstream>
#include <stdio.h> 
#include <direct.h>
#include "KeyL.cpp"
using namespace std;

class CheckFile {
    public:
    void Check() {
        ifstream file("asp.exe");
        if(!file.good()==true) {
            char current_work_dir[FILENAME_MAX];
            _getcwd(current_work_dir, sizeof(current_work_dir));
            cout << current_work_dir << endl;
            system("pause");
            // Key is_key;
            // is_key.key_reader();

        } else {
            cout << "-" << endl;
        }
    }
};