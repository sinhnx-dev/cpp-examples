#include <iostream>
#include <string>
using namespace std;

int gt(int);
void printLine();
void printRow(char *s);
void paint();

char s[8][8] = {  'A', ' ', ' ', 'B', 'A', ' ', ' ', ' ',
                  'A', ' ', ' ', 'B', 'A', ' ', ' ', ' ',
                  'A', ' ', ' ', 'B', 'A', ' ', 'C', ' ',
                  'A', ' ', ' ', 'B', 'A', ' ', ' ', ' ',
                  'A', ' ', ' ', 'B', 'A', ' ', ' ', ' ',
                  'A', ' ', ' ', 'B', 'A', ' ', ' ', ' ',
                  'A', ' ', ' ', 'B', 'A', ' ', ' ', ' ',
                  'A', ' ', 'A', 'B', 'A', ' ', ' ', ' '
                 };
int main(){
  paint();
  //cout << "3! = " << gt(3) << endl;
  
  return 0;
}

void paint(){
  printLine();
  for(int i=0; i<8; i++){
    printRow(s[i]);
  }
}
void printRow(char *s){
  for(int i=0; i<8; i++)
    cout << "|" << s[i];
  cout << "|" << endl;
  printLine();
}
void printLine(){
  cout << "+-+-+-+-+-+-+-+-+" << endl;
}
int gt(int n){
  if(n==1 || n==0){
    return 1;
  }
  return n * gt(n-1);
}