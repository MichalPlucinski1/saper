#pragma once
#include"Cell.h"
#include<iostream>
using namespace std;


Cell::Cell()
{
    hidden = true;
    selected = false;
    bomb = false;
}


void Cell::fillCell(int _x, int _y)
{
    x = _x;
    y = _y;

}


void Cell::showCell()
{
    if (this->selected && this->hidden)
        cout << "[( )]";
    else if (this->selected && !(this->hidden))
    {
        if (this->bomb)
        {
            cout << endl << endl << "You lost!";
            getchar();
        }
        else cout << "[(X)]";
    }
    else if (!(this->selected) && this->hidden)
        cout << "[   ]";
    else
        cout << "[ X ]";
}