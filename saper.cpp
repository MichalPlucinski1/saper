// saper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class Cell {
public:
    int x;
    int y;
    bool selected;
    bool hidden;
    bool bomb;
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

void Cell::fillCell(int _x, int _y)
{
    x = _x;
    y = _y;
    
}

void Cell::showCell()
{
    if (this->selected)
    {
        cout <<"[()]"
    }
}

void Cell::showTable()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cell[i][j].showCell();
        }
    }
}

Cell cell[5][5];
cell[0][0]->selected

int main()
{
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cell[i][j].fillCell(i, j);
        }
    }
}
