#include "ladder.h"
#include "general.h"
#include <iostream>
#include "gameConfig.h"

using namespace std;


void Ladder::setLadder(int x, int y, int height)
{
    _x = x;
    _y = y;
    _height = height;
}

void Ladder::drawLadder() 
{
    for (int i = 0; i < _height; i++)
    {
            gotoxy(_x, _y - i);
            cout << 'H';
    }
}





