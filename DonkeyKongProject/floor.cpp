#include "floor.h"
#include "general.h"
#include <Windows.h>
#include <iostream>

using namespace std;

void Floor::drawFloor()
{

	gotoxy(_start, _height);

	for(int i = _start; i <= _end; i++)
	{
		if (_hole != 0 && i == _hole)
			cout << ' ';
		else
			cout << _type;
	}
}