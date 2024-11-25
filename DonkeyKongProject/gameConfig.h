#pragma once


class GameConfig
{
public:
	
	enum class eKeys { LEFT = 'a', RIGHT = 'd', UP = 'w', DOWN = 'x', STAY = 's', ESC = 27 };
	static constexpr int GAME_WIDTH = 80;//x
	static constexpr int GAME_HEIGHT = 25;//y

	static constexpr int MIN_X = 3;
	static constexpr int MIN_Y = 23;

	static constexpr int MAX_X = 22;
	static constexpr int MAX_Y = 3;

	static constexpr int DIR_X = 0;
	static constexpr int DIR_Y = 0;

	static const int MAX_LADDERS = 2;

	static const int NUM_OF_FLOORS = 3;
	

};


