#pragma once


#include <iostream>
#include <string>



/*
    RE*B3
    R8xB3
    RDB
    RB3

    BxE3
    bxE3
*/

class Parser
{
public:
    bool whiteMove;
    std::string input;
    
    std::string Piece;
    std::string from;

    std::string to;

    Parser() = default;


    void get(bool white);


    void parse();
};