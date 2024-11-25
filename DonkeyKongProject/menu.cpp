#pragma once

#include "menu.h"
#include "gameConfig.h"
#include "map.h"
#include "mario.h"

#include <iostream>
#include <conio.h> // for kbhit+getch
#include <Windows.h>


using namespace std;

void Menu::show ()
{
    while (true)
    {
        system("cls");
        cout << "Donkey Kong\n";
        cout << "1. Start a new game\n";
        cout << "8. Instructions\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";

        char choice = _getch();
        switch (choice)
        {
        case '1':
        {
            system("cls");
            this->run();
        }
        break;
        case '8':
            showInstructions();
            break;
        case '9':
            return;
        case (int)GameConfig::eKeys::ESC: //Esc in char
            return;
        }
    }
}

void Menu::run()
{
    Map map;
	Mario mario;

	map.createMap();

    mario.setLaddersAndFloors(map);

	map.drawMap();

    while (true)
    {
        int keyPressed = 0;
        if (_kbhit())
        {
            keyPressed = _getch();
            if (keyPressed == (int)GameConfig::eKeys::ESC)
                break;
        }
		mario.draw('@');
        Sleep(150);
        mario.draw(' ');
		mario.move((GameConfig::eKeys)keyPressed);

    }
}

