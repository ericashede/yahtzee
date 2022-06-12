#pragma once 

#include <iostream>
#include <string>

class Player 
{
    private:
    public:
        int score;
        std::string name; 

    void namePlayer()
    {
        std::cout << "Name your player: ";
        std::cin >> name;
    }
};