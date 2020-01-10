#pragma once



// OPCODES
// Opcode 3 takes a single integer as input and saves it to the position given by its only parameter. 
//          For example, the instruction 3,50 would take an input value and store it at address 50.
// Opcode 4 outputs the value of its only parameter. For example, the instruction 4,50 would output the value at address 50.

class IntCodeComp
{
public:
    IntCodeComp();



    ~IntCodeComp();
};