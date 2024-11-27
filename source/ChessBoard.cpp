#include "ChessBoard.h"


ChessBoard::ChessBoard(int X, int Y)
    : dimensionX(X), dimensionY(Y)
{
    board = new OneTile * [Y];

    for (int i = 0; i < Y; i++)
        board[i] = new OneTile [X];

    return;
}


ChessBoard::~ChessBoard(void)
{
    
    for (int i = 0; i < dimensionY; i++)
        delete [] board[i];


    delete [] board;

    return;
}


void ChessBoard::printBoard(void) const
{
    board[0][1] =Pawn(BLACK);

    for (int i = 0; i < dimensionY; i++)
    {
        for (int ii = 0; ii < dimensionX; ii++)
            std::cout
                << board[i][ii].symbol();
        
        std::cout
            << "\n";
    }
    
    std::cout
        << std::endl;

    return;
}
