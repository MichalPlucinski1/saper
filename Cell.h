#pragma once

class Cell {
public:
    int x;
    int y;
    bool selected;
    bool hidden;
    bool bomb;
    static bool lost;


    Cell();
    void fillCell(int, int);
    static void showTable();
    void showCell();
};
