#pragma once


class Floor
{
	int _start;
	int _end;
	int _height;
	int _hole;
	char _type;

public:
	void setFloor (int start, int end, int height, int hole = 0, char type = '=')
	{
		_start = start; _end = end;
		_height = height; _hole = hole;
		_type = type;
	}

	void drawFloor();

	const int getFloor_start() const { return _start; }
	const int getFloor_end() const { return _end; }
	const int getFloor_height() const { return _height; }
	const int getFloor_hole() const { return _hole; }
	const char getFloor_type() const { return _type; }



	
};

