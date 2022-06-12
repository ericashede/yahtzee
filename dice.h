#pragma once 

#include <iostream>
#include <string>
#include <random>
#include <ctime>

#include "player.h"

class Dice
{
    private:
        static const int number_of_dice = 4;
        int roll[number_of_dice];
    public:
        int dice1 = 0, dice2 = 0, dice3 = 0, dice4 = 0, dice5 = 0;

    void diceRoll()
    {
        int number_of_rolls = 1;

        if(number_of_rolls == 1){
            std::srand(time(NULL));
            system("cls");
            std::cout << "You rolled: ";

            for(int i = 0 ; i <= number_of_dice ; i++) 
            {
                roll[i] = rand() % 6 + 1;
                std::cout << roll[i] << ", ";
            }
            if(number_of_rolls == 1)
            { 
                dice1 = roll[0];                
                dice2 = roll[1];
                dice3 = roll[2];
                dice4 = roll[3];
                dice5 = roll[4];
            }
            number_of_rolls++;
            std::cout << "\nWould you like to save any die (y/n)?" << std::endl;
            saveDiceValue();
        }
        else if(number_of_rolls == 2)
        {
            std::srand(time(NULL));
            system("cls");
            std::cout << "You rolled: ";

            for(int i = 0 ; i <= number_of_dice ; i++) 
            {
                roll[i] = rand() % 6 + 1;
                std::cout << roll[i] << ", ";
            }
        }
    }

    void saveDiceValue() {
        int dice_selection;
        char answer;
        std::cin >> answer;

        if(answer == 'y' || answer == 'Y')
        {
            while(answer == 'y' || answer || 'Y'){
                std::cout << "Which die would you like to save (1-5) press 0 to roll again" << std::endl;
                std::cin >> dice_selection;
                switch (dice_selection)
                {
                    case 1:
                        dice1 = roll[0];
                        break;
                    case 2:
                        dice2 = roll[1];
                        break;
                    case 3:
                        dice3 = roll[2];
                        break;
                    case 4:
                        dice4 = roll[3];
                        break;
                    case 5:
                        dice5 = roll[4];
                        break;
                    case 0:
                        diceRoll();
                        break;
                    default:
                        std::cout << "Try again. Which die would you like to save (1-5)" << std::endl;
                        std::cin >> dice_selection;
                        break;
                }
            }
        }
        else if (answer == 'n' || 'N')
        {
            
        }
        else 
        {

        }
    }
};