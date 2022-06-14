#pragma once 

#include <iostream>
#include <string>

class Player 
{
    private:
    public:
        int player_score;
        std::string name; 

    void namePlayer()
    {
        std::cout << "Name your player: ";
        std::cin >> name;
    }
};