#pragma once


#define EMPTY_SYMBOL '.'
#define WHITE 0
#define BLACK 1


class OneTile
{
protected:
    char tileSymbol = '.';
    int color;

public:

    OneTile();


    virtual ~OneTile();


    virtual bool empty() const;


    virtual char symbol() const;

private:


};