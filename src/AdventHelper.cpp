#include "AdventHelper.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>


bool AdventHelper::readFile(std::string file)
{
    std::string line;
    std::ifstream iStream (file);
    if (iStream.is_open())
    {
        while (getline(iStream, line))
        {
            input.push_back(line);
        }
        iStream.close();
        return true;
    }
    else
    {
        std::cout << "Unable to open file";
        return false;
    }
}


AdventHelper::AdventHelper(std::string file)
{
    std::cout << "AdventHelper initialized!" << std::endl;
    if(readFile(file))
        std::cout << "Input file read successfully" << std::endl;

}

void AdventHelper::printLines()
{
    for (std::string i : input)
        std::cout << i << std::endl;
}


std::vector<int> AdventHelper::seperateByComma()
{
    std::vector<int> out;
    std::stringstream ss(input.at(0));

    for (int i; ss >> i;) {
        out.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
    return out;
}


// int *AdventHelper::toStringArray(std::string file)
// {
//     int *out = new int[10];
//     return out;
// }


AdventHelper::~AdventHelper()
{
    std::cout << "AdventHelper deconstructed!" << std::endl;
}