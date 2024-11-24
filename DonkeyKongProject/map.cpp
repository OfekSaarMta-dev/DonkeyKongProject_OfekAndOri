#include "map.h"
#include "general.h"
#include <Windows.h>
#include <iostream>

using namespace std;

void Map::drawFloor()
{
        gotoxy(first_floor[1], first_floor[0]);
        for (int i = first_floor[1]; i <= first_floor[2]; i++)
            cout << '=';
}
