#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <string>
using namespace std;

class Tictactoe{
    private:
        string winnerName;
        int rows;
        int cols;
        bool p1;
    public:
        char board[10][25];
        string p1Name;
        string p2Name;

        Tictactoe(string p1Name, string p2Name);

        bool isOver(int row, int col);
        string getWinner();
        int getRows();
        int getCols();
        bool addNewCell(int row, int col);
        bool isP1();
};
#endif