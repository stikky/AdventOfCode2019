#include <iostream>

void partA() {
    int input[] = {1,12,2,3,1,1,2,3,1,3,4,3,1,5,0,3,2,6,1,19,1,5,19,23,1,13,23,27,1,6,27,31,2,31,13,35,1,9,35,39,2,39,13,43,1,43,10,47,1,47,13,51,2,13,51,55,1,55,9,59,1,59,5,63,1,6,63,67,1,13,67,71,2,71,10,75,1,6,75,79,1,79,10,83,1,5,83,87,2,10,87,91,1,6,91,95,1,9,95,99,1,99,9,103,2,103,10,107,1,5,107,111,1,9,111,115,2,13,115,119,1,119,10,123,1,123,10,127,2,127,10,131,1,5,131,135,1,10,135,139,1,139,2,143,1,6,143,0,99,2,14,0,0};
    int inputS = sizeof(input)/sizeof(input[0]);
    int marker=0;
    for ( int i=0; i<inputS; i++ )
    {
        std::cout << input[i] << " ";
    }
    std::cout << std::endl;

    while ( marker < inputS )
    {
        std::cout << "-------------------------------------" << std::endl;
        std::cout << "Working on Position: " << marker << " with input: " << input[marker] << std::endl;
        if ( input[marker] == 1 )
        {
            std::cout 
                << input[input[marker+1]] << " + " 
                << input[input[marker+2]] << " = "
                << "[" << input[marker+3] << "]" << input[input[marker+3]] 
                << "->" << input[input[marker+1]] + input[input[marker+2]]
                << std::endl;
            input[input[marker+3]] = input[input[marker+1]] + input[input[marker+2]];
        } else if ( input[marker] == 2 )
        {
            std::cout 
                << input[input[marker+1]] << " * " 
                << input[input[marker+2]] << " = "
                << "[" << input[marker+3] << "]" << input[input[marker+3]] 
                << "->" << input[input[marker+1]] * input[input[marker+2]]
                << std::endl;
            input[input[marker+3]] = input[input[marker+1]] * input[input[marker+2]];
        } else if ( input[marker] == 99 )
        {
            std::cout << "END" << std::endl;
            break;
        } else
        {
            std::cout << "WRONG INPUT" << std::endl;
            break;
        }
        for ( int i=0; i<inputS; i++)
        {
            std::cout << input[i] << " ";
        }
        std::cout << std::endl;
        marker += 4;
    }
}

int partB(int a, int b) {
    int input[] = {1,0,0,3,1,1,2,3,1,3,4,3,1,5,0,3,2,6,1,19,1,5,19,23,1,13,23,27,1,6,27,31,2,31,13,35,1,9,35,39,2,39,13,43,1,43,10,47,1,47,13,51,2,13,51,55,1,55,9,59,1,59,5,63,1,6,63,67,1,13,67,71,2,71,10,75,1,6,75,79,1,79,10,83,1,5,83,87,2,10,87,91,1,6,91,95,1,9,95,99,1,99,9,103,2,103,10,107,1,5,107,111,1,9,111,115,2,13,115,119,1,119,10,123,1,123,10,127,2,127,10,131,1,5,131,135,1,10,135,139,1,139,2,143,1,6,143,0,99,2,14,0,0};
    int inputS = sizeof(input)/sizeof(input[0]);
    int marker=0;
    input[1] = a;
    input[2] = b;
    while ( marker < inputS )
    {
        if ( input[marker] == 1 )
        {
            input[input[marker+3]] = input[input[marker+1]] + input[input[marker+2]];
        } else if ( input[marker] == 2 )
        {
            input[input[marker+3]] = input[input[marker+1]] * input[input[marker+2]];
        } else if ( input[marker] == 99 )
        {
            break;
        } else
        {
            break;
        }
        marker += 4;
    }
    if ( input[0] == 19690720 ) return 1;
    else return 0;
}

int main(int argc, char const *argv[])
{

    // partA();

    int i, j;
    int result = 0;
    for ( i=0; i<=99; i++)
    {
        for ( j=0; j<=99; j++ )
        {
            result = partB(i, j);
            if (result == 1)
            {
                std::cout << "19690720 mit: i=" << i << " und j=" << j << std::endl;
                break;
            } else
            {
                std::cout << "input: " << i << ", " << j << " result: " << result << std::endl;
            }
        }
        if (result == 1) break;

    }
    std::cout << "Answer: " << 100 * i + j << std::endl;
    return 0;
}
