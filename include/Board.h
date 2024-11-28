#pragma once

#include "Position.h"
#include "Piece.h"


class Board
{
public:
    Board();


    bool MovePiece(const Position & from, const Position & to);
    
    
    Piece * GetPieceAt(const Position &pos);
    
    
    void Display();


private:
    Piece * grid[8][8];
};
