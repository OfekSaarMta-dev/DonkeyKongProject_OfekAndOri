#pragma once
class Ladder
{
    int _x;
    int _y;
    int _height;

public:

    void setLadder(int x, int y, int height);
    void drawLadder();
    const int getLadder_x() const { return _x; }
    const int getLadder_y() const { return _y; }
    const int getLadder_height() const { return _height; }

};