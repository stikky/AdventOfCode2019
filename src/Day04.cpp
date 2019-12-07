// - It is a six-digit number.
// - The value is within the range given in your puzzle input.
// - Two adjacent digits are the same (like 22 in 122345).
// - Going from left to right, the digits never decrease;

#include <iostream>

int range[2] = {193651, 649729};
std::string pw;
int possiblePWs=0;

int main(int argc, char const *argv[])
{
    for ( int i=range[0]; i<=range[1]; i++ )
    {
        pw = std::to_string(i);

        if ( pw[0] <= pw[1] && pw[1] <= pw[2] && pw[2] <= pw[3] && pw[3] <= pw[4] && pw[4] <= pw[5] )   // check for digits increasing
        {

            if ( pw[0] == pw[1] && pw[1] != pw[2] && pw[1] != pw[3] && pw[1] != pw[4] && pw[1] != pw[5])    // aauvwx 01
            {
                possiblePWs++;
                std::cout << pw << " (" << possiblePWs << ")";
                continue;
            }
            if ( pw[1] == pw[2] && pw[2] != pw[3] && pw[2] != pw[4] && pw[2] != pw[5] && pw[2] != pw[0])    // uaavwx 12
            {
                possiblePWs++;
                std::cout << pw << " (" << possiblePWs << ")";
                continue;
            }
            if ( pw[2] == pw[3] && pw[3] != pw[4] && pw[3] != pw[5] && pw[3] != pw[0] && pw[3] != pw[1])    // uvaawx 23
            {
                possiblePWs++;
                std::cout << pw << " (" << possiblePWs << ")";
                continue;
            }
            if ( pw[3] == pw[4] && pw[4] != pw[5] && pw[4] != pw[0] && pw[4] != pw[1] && pw[4] != pw[2])    // uvwaax 34
            {
                possiblePWs++;
                std::cout << pw << " (" << possiblePWs << ")";
                continue;
            }        
            if ( pw[4] == pw[5] && pw[5] != pw[0] && pw[5] != pw[1] && pw[5] != pw[2] && pw[5] != pw[3])    // uvwxaa 45
            {
                possiblePWs++;
                std::cout << pw << " (" << possiblePWs << ")";
                continue;
            }
        }


        // if ( pw[0] == pw[1] || pw[1] == pw[2] || pw[2] == pw[3] || pw[3] == pw[4] || pw[4] == pw[5] )
        // {
        //     if ( pw[0] <= pw[1] && pw[1] <= pw[2] && pw[2] <= pw[3] && pw[3] <= pw[4] && pw[4] <= pw[5] ) 
        //     {
        //         possiblePWs++;
        //         std::cout << pw << " ";
        //     }
        // }
    }

    std::cout << possiblePWs;

    return 0;
}