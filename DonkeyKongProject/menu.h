#pragma once
#include <iostream>
#include <conio.h>


class Menu {
    char ch;
private:
    void showInstructions()
    {
        system("cls");
        std::cout << "Instructions:\n";
        std::cout << "a/A - Move Left\n";
        std::cout << "d/D - Move Right\n";
        std::cout << "w/W - Jump/Climb Up\n";
        std::cout << "x/X - Climb Down\n";
        std::cout << "s/S - Stay\n";
        std::cout << "ESC - Pause Game\n";
        std::cout << "\nPress any key to return to menu...";
        ch = _getch();
    }

public:

    void show();
    void run();

};


// 1. add class Ladder
// 2. remove curser
// 3. more floors
// 4. mario climeb the ladder
// 5. mario fall from floor to floor
// 6. mario fall from floor to end of the screen - as a resalt start over the map from the begening
// 7. add donky kong and princes in the top floor

