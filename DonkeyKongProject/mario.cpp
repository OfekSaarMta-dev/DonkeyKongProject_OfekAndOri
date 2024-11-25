#include "mario.h"
#include "gameConfig.h"
#include "general.h"
#include "ladder.h"
#include <iostream>

using namespace std;


void Mario::draw(char ch)
{
	gotoxy(_x, _y);
	cout << ch;
}


bool Mario::isOnLadder(Ladder ladder)
{
	int ladder_x = ladder.getLadder_x();
	int ladder_y = ladder.getLadder_y();
	int ladder_height = ladder.getLadder_height();
	return ((_y <= ladder_y && _y >= ladder_y - ladder_height) && _x == ladder_x);
}



void Mario::move(GameConfig::eKeys key)
{
	const int JUMP_HEIGHT = 2;
	const int JUMP_DURATION = 100;

	for (int i = 0; i < GameConfig::NUM_OF_FLOORS; i++)
	{
		if (isOnLadder(_ladders[i]))
		{
			switch (key)
			{
			case GameConfig::eKeys::UP:
				dir_x = 0;
				dir_y = -1;
				break;

			case GameConfig::eKeys::DOWN:

				dir_x = 0;
				dir_y = 1;
				break;

			case GameConfig::eKeys::STAY:
				dir_x = 0;
				dir_y = 0;
				break;
			}
			_x += dir_x;
			_y += dir_y;

		}
		else
		{
			Sleep(JUMP_DURATION);

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


			case GameConfig::eKeys::UP:
			{
				dir_y = -1;

				// Jump up
				for (int i = 1; i <= JUMP_HEIGHT; i++)
				{
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
			case GameConfig::eKeys::STAY:
				dir_x = 0;
				dir_y = 0;
				break;

			}
			_x += dir_x;
			_y += dir_y;
		}
	}
}



