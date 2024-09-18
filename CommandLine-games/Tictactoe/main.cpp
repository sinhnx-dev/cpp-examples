#include <iostream>
#include "Tictactoe.h"

void paint(char board[10][25], int rows, int cols);
void showLine(int cols);

int main(int count, char* args[]){
    Tictactoe *caro = new Tictactoe("p1", "p2");
    
    int r, c;
    do{
        paint(caro->board, caro->getRows(), caro->getCols());
        if(caro->isP1()){
            cout << "p1 (X): ";
        }else{
            cout << "p2 (O): ";
        }
        cin >> r >> c;
        //check r & c

        caro->addNewCell(r,c);
    }while(!caro->isOver(r,c));

    paint(caro->board, caro->getRows(), caro->getCols());
    if(!caro->isP1()){
        cout << caro->p1Name;
    }else{
        cout << caro->p2Name;
    }
    cout << " is winner" << endl << "GAME OVER!!!" << endl;

    return 0;
}

void paint(char board[10][25], int rows, int cols){
    showLine(cols);
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << "|" << board[i][j];
        }
        cout << "|" << endl;
        showLine(cols);
    }
}

void showLine(int cols){
    for(int i=0; i<cols; i++){
        cout << "+-";
    }
    cout << "+" << endl;
}