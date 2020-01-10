/*
    Advent of Code 2019
    Day 5: Sunny with a Chance of Asteroids
*/

#include <iostream>
#include "AdventHelper.h"
#include "IntCodeComp.h"
#include <vector>
#include <string>


int main(int argc, char const *argv[])
{
    // std::cout << getInput("./input/day05.txt");
    AdventHelper ah("./input/day03.txt");
    // ah.printLines();
    IntCodeComp icc;

    std::vector<int> mv;
    mv = ah.seperateByComma();
    for (std::size_t i = 0; i < mv.size(); i++)
        std::cout << mv[i] << std::endl;


    return 0;
}