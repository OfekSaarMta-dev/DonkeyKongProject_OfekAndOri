#pragma once

#include "gameConfig.h"

class Map
{
	int first_floor[3];

	
public:
	Map(int max_x)
	{
		first_floor[0] = GameConfig::MIN_Y;
		first_floor[1] = GameConfig::MIN_X;
		first_floor[2] = max_x;
	}
	void drawFloor();
};

