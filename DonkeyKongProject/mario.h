#pragma once

#include "gameConfig.h"

class Mario
{
	int _x;
	int _y;
	int dir_x;
	int dir_y;
	
	
public:
	Mario()
	{
		_x = GameConfig::MIN_X + 1; _y = GameConfig::MIN_Y - 1;
		dir_x = GameConfig::DIR_X; dir_y = GameConfig::DIR_Y;
	}
	void draw(char ch);
	void move(GameConfig::eKeys key);
};

