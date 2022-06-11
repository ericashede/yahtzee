#pragma once 

#include <iostream>
#include <string>
#include <random>
#include <ctime>

void diceroll()
{
    std::srand(time(NULL));
    int number = 6;
    int result = 0;
    result = rand() % number + 1;
    
    std::cout << "You rolled a:" << result << std::endl;
};