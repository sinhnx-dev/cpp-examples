#include "Tictactoe.h"

Tictactoe::Tictactoe(string name1, string name2){
    this->p1Name = name1;
    this->p2Name = name2;
    this->winnerName = "";
    rows = 10;
    cols = 25;
    p1 = true;
    //init game board
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            board[i][j] = ' ';
        }
    }
}

bool Tictactoe::isOver(int row, int col){
    //hang ngang
    int point = 1;
    for(int i=col-1; i>=0 && board[row][i]==board[row][col]; i--){
        point++;
    }
    for(int i=col+1; i<=cols && board[row][i]==board[row][col]; i++){
        point++;
    }
    if(point>=5){
        return true;
    }

    point = 1;
    //cot doc...
    return false;
}
bool Tictactoe::addNewCell(int row, int col){
    if(board[row][col]==' '){
        if(p1){
            board[row][col] = 'X';
            p1 = false;
        }else{
            board[row][col] = 'O';
            p1 = true;
        }
        return true;
    }
    return false;
}
string Tictactoe::getWinner(){
    return winnerName;
}
bool Tictactoe::isP1(){
    return p1;
}
int Tictactoe::getRows(){
    return rows;
}
int Tictactoe::getCols(){
    return cols;
}