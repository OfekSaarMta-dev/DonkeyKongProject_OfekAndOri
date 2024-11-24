#include "mario.h"
#include "gameConfig.h"
#include "general.h"
#include <iostream>

using namespace std;


void Mario::draw(char ch)
{
	gotoxy(_x, _y);
	cout << ch;
}



void Mario::move(GameConfig::eKeys key)
{
		switch (key)
		{
		case GameConfig::eKeys::LEFT:
			dir_x = -1;
			dir_y = 0;
			break;

		case GameConfig::eKeys::RIGHT:
			dir_x = 1;
			dir_y = 0;
			break;

		case GameConfig::eKeys::Jump:
			dir_y = -1; // going up
			_y += dir_y;
			_x += dir_x;
			this->draw('@');
			Sleep(200);
			this->draw(' ');
			dir_y = 1; // going down
			_y += dir_y;
			_x += dir_x;
			this->draw('@');
			Sleep(200);
			this->draw(' ');
			dir_y = 0;
			break;

		//case GameConfig::eKeys::DOWN:
		//	dir_x = 0;
		//	dir_y = 1;
		//	break;

		case GameConfig::eKeys::STAY:
			dir_x = 0;
			dir_y = 0;
			break;

		}
		_x += dir_x;
		_y += dir_y;
}





