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
        int saved_dice[number_of_dice];

    void diceRoll()
    {
        int number_of_rolls = 1;

        while(number_of_rolls <= 3) {
            if(number_of_rolls == 1){
                std::srand(time(NULL));
                system("cls");
                std::cout << "You rolled: ";

                for(int i = 0 ; i <= number_of_dice ; i++) 
                {
                    roll[i] = rand() % 6 + 1;
                    if(i <= 3)
                    {
                    std::cout << roll[i] << ", ";
                    }
                    else
                    {
                    std::cout << roll[i] << "." << std::endl;
                    }
                }
                dice1 = roll[0];                
                dice2 = roll[1];
                dice3 = roll[2];
                dice4 = roll[3];
                dice5 = roll[4];
                number_of_rolls++;

                std::cout << "\nWould you like to save any die (y/n)?" << std::endl;
                saveDice();
            }
            else if(number_of_rolls == 2)
            {
                std::srand(time(NULL));
                system("cls");
                std::cout << "You rolled: ";

                for(int i = 0 ; i <= number_of_dice ; i++) 
                {
                    roll[i] = rand() % 6 + 1;
                    if(i <= 3)
                    {
                    std::cout << roll[i] << ", ";
                    }
                    else
                    {
                    std::cout << roll[i] << "." << std::endl;
                    }
                }
                std::cout << "\nWould you like to save any die (y/n)?" << std::endl;
                saveDice();
            }
            else if(number_of_rolls == 3)
            {
                std::srand(time(NULL));
                system("cls");
                std::cout << "Final roll" << std::endl << "You rolled: ";

                for(int i = 0 ; i <= number_of_dice ; i++) 
                {
                    roll[i] = rand() % 6 + 1;
                    if(i <= 3)
                    {
                    std::cout << roll[i] << ", ";
                    }
                    else
                    {
                    std::cout << roll[i] << "." << std::endl;
                    }

                }
                std::cout << "\nWould you like to save any die (y/n)?" << std::endl;
                saveDice();
            }
            else
            {
                break;
            }
        }
    }

    void saveDice() {
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
                        saved_dice[0] = dice1;
                        break;
                    case 2:
                        saved_dice[1] = dice2;
                        break;
                    case 3:
                        saved_dice[2] = dice3;
                        break;
                    case 4:
                        saved_dice[3] = dice4;
                        break;
                    case 5:
                        saved_dice[4] = dice5;
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
            diceRoll();
        }
        else 
        {
            std::cout << "Wrong, choice please try again";
            diceRoll();
        }
    }
};