#pragma once


#include <iostream>


#include "OneTile.h"
#include "Pawn.h"


#define WHITE 0
#define BLACK 1


class ChessBoard
{
private:
    int dimensionX;
    int dimensionY;

    OneTile ** board;

public:

    ChessBoard(int X, int Y);


    ~ChessBoard(void);

    void printBoard(void) const;

private:

};
