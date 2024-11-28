#pragma once


#include "Position.h"


#include <vector>


class Board
{
private:
    char * grid[8][8];

public:
    Board();


    bool MovePiece(const Position & from, const Position & to);
    
    
    char * GetPieceAt(const Position &pos);
    
    
    void Display();


private:

    std::vector <Position> legalKnightMoves(const Position & originalPosition) const;

    // Y X
    const int knightTable[8][2] =
    {
        /*-2,+2*/{+1, +2}, /*+2, 0*/{+2, +1},/*+2,+2*/
        {+1, -2},                           {+1, +2},
        /*0, -2*/          /* 0, 0*/         /*0,+2*/
        {-1, -2},                           {-1, +2},
        /*-2,-2*/{-2, -1}, /*-2, 0*/{-2, +1},/*-2,+2*/

    };

};
