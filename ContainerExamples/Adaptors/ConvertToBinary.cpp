#include <iostream>
#include <stack>
using namespace std;

int main(int count, const char* args[]){
    stack<int> sBinary;
    int num;

    cout << "input an integer number: ";
    cin >> num;

    while(num > 0){
        sBinary.push(num % 2);
        num /= 2;
    }

    while(!sBinary.empty()){
        cout << sBinary.top();
        sBinary.pop();
    }
    cout << endl;
    return 0;
}