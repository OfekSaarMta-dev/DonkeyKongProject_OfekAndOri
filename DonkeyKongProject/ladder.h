#pragma once
class Ladder
{
    int _x;
    int _y;
    int _height;

public:

    void setLadder(int x, int y, int height);
    void drawLadder();
    const int getLadder_x() { return _x; }
    const int getLadder_y() { return _y; }
    const int getLadder_height() { return _height; }

};