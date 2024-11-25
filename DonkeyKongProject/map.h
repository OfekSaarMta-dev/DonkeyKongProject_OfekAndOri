#pragma once

#include "floor.h"
#include "ladder.h"
#include "gameConfig.h"

class Map
{
	Floor _floors[GameConfig::NUM_OF_FLOORS];

	//Ladder _ladders[GameConfig::MAX_LADDERS];
	
public:
	
	void drawMap();
	//bool isOnLadder(int x, int y);
	//int getTopOfLadder(int x, int y);


};