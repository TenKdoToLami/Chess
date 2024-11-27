#pragma once


#include "Position.h"
#include "OneTile.h"


#define PAWN_SYMBOL_WHITE 'P'
#define PAWN_SYMBOL_BLACK 'p'



class Pawn : public OneTile
{
private:


public:
    Pawn(int playerColor);


    virtual char symbol(void) const override;


    virtual bool empty() const override;


    
private:

};