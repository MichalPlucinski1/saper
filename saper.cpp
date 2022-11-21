// saper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ClearScreen.h"
#include<conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;


class Cell {
public:
    int x;
    int y;
    bool selected;
    bool hidden;
    bool bomb;
    static bool lost;
    Cell();
    void fillCell(int,int);
    static void showTable();
    void showCell();
};


Cell::Cell()
{
    hidden = true;
    selected = false;
}

bool Cell::lost = false;
Cell cell[5][5];


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

void Cell::showTable()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cell[i][j].showCell();
        }
        cout << endl;
    }
}




int main()
{
    cell[0][0].selected = true;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cell[i][j].fillCell(i, j);
        }
    }


    while (getchar() != 'q')
    {
        ClearScreen();
        Cell::showTable();
        
    }
}