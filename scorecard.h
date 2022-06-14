#pragma once

#include <iostream>

class Scorecard 
{
    private:
    public:
    int aces = 0, twos = 0, threes = 0, fours = 0, fives = 0, sixes = 0;
    int three_of_a_kind = 0, four_of_a_kind = 0;
    int full_house = 0;
    int small_straight = 0, large_straight = 0;
    int yahtzee = 0, chance = 0;
};