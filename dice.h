#pragma once 

#include <iostream>
#include <string>
#include <random>
#include <ctime>

#include "player.h"

class Dice
{
    private:
        static const int number_of_dice = 4; // Set number of dice (element 0-5)
        int roll[number_of_dice]; // Roll variable
        int number_of_rolls = 1; // Counter variable for number of rolls
    public:
        int dice1 = 0, dice2 = 0, dice3 = 0, dice4 = 0, dice5 = 0; // Variable for each dice
        int saved_dice[number_of_dice]; // Array to save dice value

    void diceRoll()
    {
        // Loop while number of rolls is less than 3
        while(number_of_rolls <= 3) {
            // First roll of the round
            if(number_of_rolls == 1){
                std::srand(time(NULL));
                system("cls"); // Windows hack to clear prompt
                std::cout << "You rolled: ";

                // Roll 5 random dice 
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
                // Set values of dice
                dice1 = roll[0];                
                dice2 = roll[1];
                dice3 = roll[2];
                dice4 = roll[3];
                dice5 = roll[4];
                number_of_rolls++;

                std::cout << "\nWould you like to save any die (y/n)?" << std::endl;
                saveDice();
            }
        }
    }

    // Function for first re roll
    void reRoll()
    {
        std::srand(time(NULL));
        system("cls"); // Windows hack to clear prompt
        std::cout << "You rolled: ";

        // Roll 5 random dice 
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
        number_of_rolls++; // Increment number of rolls 
        std::cout << "\nWould you like to save any die (y/n)?" << std::endl;
        saveDice();
    }

    // Function for final roll of the round
    void finalRoll()
    {
        std::srand(time(NULL));
        system("cls"); // Windows hack to clear prompt
        std::cout << "Final roll" << std::endl << "You rolled: ";

        // Roll 5 random dice 
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
        number_of_rolls++; // Increment number of rolls 
        std::cout << "\nWould you like to save any die (y/n)?" << std::endl;
        saveDice();
    }

    // Function to save dice values
    void saveDice() 
    {
        int dice_selection;
        char answer;
        std::cin >> answer;

        // Give user choice to save dice after roll
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
                        // For first re roll
                        if(number_of_rolls == 2)
                        {
                            reRoll();
                        }
                        // Final roll
                        else if (number_of_rolls == 3)
                        {
                            finalRoll();
                        }
                        break;
                    default:
                        // Simple error handler
                        std::cout << "Try again. Which die would you like to save (1-5)" << std::endl;
                        std::cin >> dice_selection;
                        break;
                }
            }
        }
        else if (answer == 'n' || 'N')
        {
            if(number_of_rolls == 2)
            // For first re roll
            {
                reRoll();
            }
            // Final roll
            else if (number_of_rolls == 3)
            {
                finalRoll();
            }
        }
        else 
        {
            // Simple error handler
            std::cout << "Wrong, choice please try again";
        }
    }
};