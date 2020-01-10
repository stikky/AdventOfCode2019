#ifndef ADVENTHELPER_H
#define ADVENTHELPER_H

#include <string>
#include <vector>


class AdventHelper
{
    private:
        std::vector<std::string> input;
        bool readFile(std::string);

    public:
        AdventHelper(std::string file);

        void printLines();

        std::vector<int> seperateByComma();

        // int *toStringArray(std::string file);

        ~AdventHelper();   
};

#endif