#pragma once

#include "Position.h"


class Piece
{
public:
    Piece(bool isWhite) : isWhite(isWhite) {}
    virtual ~Piece() {}
    //virtual bool IsMoveValid(const Position &from, const Position &to, const Board &board) const = 0;
    bool IsWhite() const { return isWhite; }
    virtual char GetSymbol() const = 0; // For terminal representation
protected:
    bool isWhite;
};
