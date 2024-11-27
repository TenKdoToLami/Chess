#include "Pawn.h"


Pawn::Pawn(int playerColor)
{
    tileSymbol = playerColor == WHITE ? PAWN_SYMBOL_WHITE : PAWN_SYMBOL_BLACK;
    color = playerColor;
}

char Pawn::symbol(void) const
{
    return 0;
}
