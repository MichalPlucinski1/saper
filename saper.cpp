// saper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ClearScreen.h"
#include "Cell.h"
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;



bool Cell::lost = false;
Cell cell[5][5];




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