#include <iostream>
#include <array>
#include <algorithm> // for std::sort
using namespace std;

int main(int count, const char* args[]){
    array<int, 5> myarray = { 7, 3, 1, 9, 5 };
    sort(myarray.begin(), myarray.end()); // sort the array forwards
    //sort(myarray.rbegin(), myarray.rend()); // sort the array backwards
    for (const auto &element : myarray){
        cout << element << ' ';
    }
    return 0;
}