#pragma once

#include "floor.h"
#include "ladder.h"
#include "gameConfig.h"

class Map
{
	Floor _floors[GameConfig::NUM_OF_FLOORS];

	Ladder _ladders[GameConfig::NUM_OF_LADDERS];

	
public:

	void createMap();
	void drawMap();
	const Floor* getFloors () { return _floors; }
	const Ladder* getLadders() { return _ladders; }

};


