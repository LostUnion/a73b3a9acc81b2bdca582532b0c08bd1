#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <time.h>
#include "copy.cpp"
#include "make_bat.cpp"
#include "check.cpp"
using namespace std;

int main(){
    CopyFileToDir copy;
    copy.Copy();
    CreateBatFile make;
    make.MakeBat();
    CheckFile check;
    check.Check();
}
