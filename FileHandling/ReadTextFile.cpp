#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int count, const char* args[]){
    string line;
    ifstream sourceCode ("ReadTextFile.cpp");
    if(sourceCode.is_open()){
        while(getline(sourceCode, line)){
            cout << line << endl;
        }
        sourceCode.close();
    }else{
        cout << "Can't open file..." << endl;
    }
    return 0;
}