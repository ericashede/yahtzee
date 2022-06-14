#pragma once

#include <iostream>

#include "dice.h"
#include "player.h"
#include "scorecard.h"

void playGame()
{
    int number_of_players = 0;
    std::cout << "Welcome to Yahtzee!" << std::endl << "How many people are playing (1-4)" << std::endl;
    std::cin >> number_of_players;
    
    while(number_of_players != 1 || number_of_players != 2 || number_of_players != 3 || number_of_players != 4) 
    {   
        if(number_of_players == 1){
            Player player1;
            Dice dice1;
            player1.namePlayer();
            std::cout << "\nPlayer 1: " << player1.name << std::endl;
            int round = 1;
            while(round <= 13)
            {
                char rollbutton;
                std::cout << player1.name << "'s turn!" << std::endl;
                std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                std::cin >> rollbutton;

                if(rollbutton == 'r' || rollbutton == 'R') 
                {
                    dice1.diceRoll();
                    round++;
                }
                else 
                {
                    std::cout << "wrong button" << std::endl;
                }
            }
            std::cout << "\nEnd of round. Here's the final score:" << std::endl;
            system("pause");
            break;
        }
        else if(number_of_players == 2){
            Player player1, player2;
            Dice dice1, dice2;
            player1.namePlayer();
            player2.namePlayer();
            std::cout << "\nPlayer 1: " << player1.name << std::endl << "Player 2: " << player2.name << std::endl;

            int round = 1;
            int turn = 1;
            while(round <= 13)
            {
                char rollbutton;
                if(turn == 1)
                {
                    std::cout << player1.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice1.diceRoll();
                        turn = 2;
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
                else if(turn == 2)
                {
                    std::cout << player2.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice2.diceRoll();
                        round++;
                        turn = 1;
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
            }
            std::cout << "\nEnd of round. Here's the final score:" << std::endl;
            system("pause");
            break;
        }
        else if(number_of_players == 3){
            Player player1, player2, player3;
            Dice dice1, dice2, dice3;
            player1.namePlayer();
            player2.namePlayer();
            player3.namePlayer();
            std::cout << "\nPlayer 1: " << player1.name << std::endl << "Player 2: " << player2.name << std::endl
                      << "Player 3: " << player3.name << std::endl;

            int round = 1;
            int turn = 1;
            while(round <= 13)
            {
                char rollbutton;
                if(turn == 1)
                {
                    std::cout << player1.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice1.diceRoll();
                        turn = 2;
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
                else if(turn == 2)
                {
                    std::cout << player2.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice2.diceRoll();
                        round++;
                        turn = 1;
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
            }
            std::cout << "\nEnd of round. Here's the final score:" << std::endl;
            system("pause");
            break;
        }
        else if(number_of_players == 4){
            Player player1, player2, player3, player4;
            Dice dice1, dice2, dice3, dice4;
            player1.namePlayer();
            player2.namePlayer();
            player3.namePlayer();
            player4.namePlayer();
            std::cout << "\nPlayer 1: " << player1.name << std::endl << "Player 2: " << player2.name << std::endl
                      << "Player 3: " << player3.name << std::endl << "Player 4: " << player4.name << std::endl;

            int round = 1;
            int turn = 1;
            while(round <= 13)
            {
                char rollbutton;
                if(turn == 1)
                {
                    std::cout << player1.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice1.diceRoll();
                        turn = 2;
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
                else if(turn == 2)
                {
                    std::cout << player2.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice2.diceRoll();
                        turn = 3;
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
                else if(turn == 3)
                {
                    std::cout << player3.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice2.diceRoll();
                        turn = 4;
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
                else if(turn == 4)
                {
                    std::cout << player4.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice2.diceRoll();
                        turn = 1;
                        round++;
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
            }
            std::cout << "\nEnd of round. Here's the final score:" << std::endl;
            system("pause");
            break;
        }
        else {
            std::cout << "Wrong, please try again" << std::endl;
            std::cin >> number_of_players;
        }
    }
}