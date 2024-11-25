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
		{

			const int JUMP_HEIGHT = 2;
			const int JUMP_DURATION = 100; 
			dir_y = -1;

			// Jump up
			for (int i = 1; i <= JUMP_HEIGHT; i++) {
				this->draw(' ');
				_y += dir_y;
				_x += dir_x;
				this->draw('@');
				Sleep(JUMP_DURATION);
			}

			// Hang in the air briefly
			Sleep(JUMP_DURATION);

			dir_y = 2;
			// Fall down
			this->draw(' ');
			_y += dir_y;
			Sleep(JUMP_DURATION);
			
			dir_y = 0;

			break;
		}

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





