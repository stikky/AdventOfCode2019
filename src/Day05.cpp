/*
    Advent of Code 2019
    Day 5: Sunny with a Chance of Asteroids
*/

#include <iostream>
#include <fstream>


std::string getInput(std::string file)
{
    std::string line;
    std::ifstream iStream (file);
    if ( iStream.is_open( ) )
    {
        while ( getline (iStream,line) )
        {
            std::cout << line << '\n';
        }
        iStream.close();
        return "File read";
    }
    else
    {
        std::cout << "Unable to open file"; 
        return "Unable to open file";
    }
}



int main(int argc, char const *argv[])
{
    
    return 0;
}