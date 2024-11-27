#include "OneTile.h"


OneTile::OneTile() = default;

OneTile::~OneTile() = default;

bool OneTile::empty() const
{
    return true;
}


char OneTile::symbol() const
{
    return tileSymbol;
}
