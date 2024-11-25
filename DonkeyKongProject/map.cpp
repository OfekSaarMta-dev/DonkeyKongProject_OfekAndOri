#include "map.h"
#include "general.h"
#include <Windows.h>
#include <iostream>

using namespace std;



void Map::createMap()
{
	this->_floors[0].setFloor(3, 77, 23, 25, '=');
	this->_floors[1].setFloor(10, 65, 18, 43, '<');
	this->_floors[2].setFloor(20, 40, 12, 30, '>');

	this->_ladders[0].setLadder(25, 23, 6);
	this->_ladders[1].setLadder(43, 18, 6);
}



void Map::drawMap()
{
	

	for (int i = 0; i < GameConfig::NUM_OF_FLOORS; i++)
		this->_floors[i].drawFloor();

    // Set and draw ladders
    

    for (int i = 0; i < GameConfig::NUM_OF_LADDERS; i++)
        this->_ladders[i].drawLadder();
}

/*bool Map::isOnLadder(int x, int y)
{
    for (int i = 0; i < GameConfig::MAX_LADDERS; i++)
    {
        if (this->_ladders[i].isOnLadder(x, y));
            return true;
    }
    return false;
}
*/
