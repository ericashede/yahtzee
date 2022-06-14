#pragma once 

#include <iostream>
#include <string>

class Player 
{
    private:
    public:
        int player_score;
        std::string name; 

    // Function to set player name
    void namePlayer()
    {
        std::cout << "Name your player: ";
        std::cin >> name;
    }
};