#pragma once

#include <iostream>

#include "dice.h"
#include "player.h"
#include "scorecard.h"

void playGame()
{
    int number_of_players = 0; // Variable to chose number of players.
    
    // Welcome prompt
    std::cout << "Welcome to Yahtzee!" << std::endl << "How many people are playing (1-4)" << std::endl;
    std::cin >> number_of_players; // Get number of player from user
    
    while(number_of_players != 1 || number_of_players != 2 || number_of_players != 3 || number_of_players != 4) 
    {   
        // Play with only one player
        if(number_of_players == 1){
            Player player1; // Declare player object
            Dice dice1; // Declare dice object
            player1.namePlayer(); // Function to name player
            std::cout << "\nPlayer 1: " << player1.name << std::endl;

            // Set round to one and increment until 13 rounds are played
            int round = 1;
            while(round <= 13)
            {
                // Player rolls by pressing 'r'
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
            // After 13th round print score
            std::cout << "\nEnd of round. Here's the final score:" << std::endl;
            system("pause");
            break;
        }
        else if(number_of_players == 2){ // Play with 2 players
            Player player1, player2; // Declare player object
            Dice dice1, dice2; // Declare dice object
            // Function to name players
            player1.namePlayer();
            player2.namePlayer();
            std::cout << "\nPlayer 1: " << player1.name << std::endl << "Player 2: " << player2.name << std::endl;

            // Set round to one and increment until 13 rounds are played
            int round = 1;
            int turn = 1; // Variable to set turn to play
            while(round <= 13)
            {
                char rollbutton;
                if(turn == 1) // Player ones turn
                {
                    // Player rolls by pressing 'r'
                    std::cout << player1.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice1.diceRoll();
                        turn = 2; // After player finish turn, set turn to next player
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
                else if(turn == 2)
                {
                    // Player rolls by pressing 'r'
                    std::cout << player2.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice2.diceRoll();
                        round++; // After both players played through one turn
                        turn = 1; // After player finish turn, set turn to next player
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
            }
            // After 13th round print score
            std::cout << "\nEnd of round. Here's the final score:" << std::endl;
            system("pause");
            break;
        }
        else if(number_of_players == 3){ // Play with 3 players
            Player player1, player2, player3; // Declare player object
            Dice dice1, dice2, dice3; // Declare dice object
            // Function to name players
            player1.namePlayer();
            player2.namePlayer();
            player3.namePlayer();
            std::cout << "\nPlayer 1: " << player1.name << std::endl << "Player 2: " << player2.name << std::endl
                      << "Player 3: " << player3.name << std::endl;

            // Set round to one and increment until 13 rounds are played
            int round = 1;
            int turn = 1; // Variable to set turn to play
            while(round <= 13)
            {
                char rollbutton;
                if(turn == 1) // Player ones turn
                {
                    // Player rolls by pressing 'r'
                    std::cout << player1.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice1.diceRoll();
                        turn = 2; // After player finish turn, set turn to next player
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
                else if(turn == 2) // Player twos turn
                {
                    // Player rolls by pressing 'r'
                    std::cout << player2.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice2.diceRoll();
                        turn = 3; // After player finish turn, set turn to next player
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
                else if(turn == 3) // Player threes turn
                {
                    // Player rolls by pressing 'r'
                    std::cout << player3.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice2.diceRoll();
                        round++;
                        turn = 1; // After player finish turn, set turn to next player
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
        else if(number_of_players == 4){ // Play with 4 players
            Player player1, player2, player3, player4; // Declare player object
            Dice dice1, dice2, dice3, dice4; // Declare dice object
            // Function to name players
            player1.namePlayer();
            player2.namePlayer();
            player3.namePlayer();
            player4.namePlayer();
            std::cout << "\nPlayer 1: " << player1.name << std::endl << "Player 2: " << player2.name << std::endl
                      << "Player 3: " << player3.name << std::endl << "Player 4: " << player4.name << std::endl;

            // Set round to one and increment until 13 rounds are played
            int round = 1;
            int turn = 1; // Variable to set turn to play
            while(round <= 13)
            {
                char rollbutton;
                if(turn == 1)
                {
                    // Player rolls by pressing 'r'
                    std::cout << player1.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice1.diceRoll();
                        turn = 2; // After player finish turn, set turn to next player
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
                else if(turn == 2)
                {
                    // Player rolls by pressing 'r'
                    std::cout << player2.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice2.diceRoll();
                        turn = 3; // After player finish turn, set turn to next player
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
                else if(turn == 3)
                {
                    // Player rolls by pressing 'r'
                    std::cout << player3.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice2.diceRoll();
                        turn = 4; // After player finish turn, set turn to next player
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
                else if(turn == 4)
                {
                    // Player rolls by pressing 'r'
                    std::cout << player4.name << "'s turn!" << std::endl;
                    std::cout << "\nRoll the dice by pressing 'r'" << std::endl;
                    std::cin >> rollbutton;

                    if(rollbutton == 'r' || rollbutton == 'R') 
                    {
                        dice2.diceRoll();
                        turn = 1; // After player finish turn, set turn to next player
                        round++;
                    }
                    else 
                    {
                        std::cout << "wrong button" << std::endl;
                    }
                }
            }
            // After 13th round print score
            std::cout << "\nEnd of round. Here's the final score:" << std::endl;
            system("pause");
            break;
        }
        else
        {
            // Simple error handler
            std::cout << "Wrong, please try again" << std::endl;
            std::cin >> number_of_players;
        }
    }
}