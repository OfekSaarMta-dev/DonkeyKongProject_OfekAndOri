#pragma once

#include <windows.h> // for gotoxy
#include <process.h> // for system
#include "general.h"
#include <iostream>
using namespace std;

void gotoxy(int x, int y) {
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}

void clrscr() {
    system("cls");
}



//option to add to delete the cursor