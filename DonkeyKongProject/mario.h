#pragma once

#include "gameConfig.h"
#include "map.h"

class Ladder;
class Floor;
class Map;

class Mario
{
	int _x;
	int _y;
	int dir_x;
	int dir_y;

	const Ladder* _ladders = nullptr;
	const Floor* _floors = nullptr;


	
	
public:
	Mario()
	{
		_x = GameConfig::MIN_X + 1; _y = GameConfig::MIN_Y - 1;
		dir_x = GameConfig::DIR_X; dir_y = GameConfig::DIR_Y;
	}

	
	void setLaddersAndFloors (Map& map)
	{
		_ladders = map.getLadders();
		_floors = map.getFloors();
	}


	void draw(char ch);
	bool isOnLadder(const Ladder* ladders);
	void move(GameConfig::eKeys key);

	
};

