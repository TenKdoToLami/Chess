#include "Parser.h"


void Parser::get(bool white)
{
    whiteMove = white;
    std::cin >> input;

    return;
}

void Parser::parse()
{
    uint size = input.size();
    if (size == 2)
    {
        if (whiteMove)
            Piece = "P";
        else
            Piece = "p";
        to = input;
        
        return;
    }



    return;
}
