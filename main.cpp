#include <iostream>

#include "functions.h"

int main()
{
    while(1){
        char rollbutton;
        std::cout << "roll the dice by pressing 'r'" << std::endl;
        std::cin >> rollbutton;

        if(rollbutton == 'r') {
            diceroll();
        }
        else {
            std::cout << "wrong button" << std::endl;
        }
    }
}