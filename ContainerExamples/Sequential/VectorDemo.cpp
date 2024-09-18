#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
using namespace std;

int main(int count, char* args[]){
    vector<int> v = { 7, 3, 1, 9, 5 };
    v.resize(4);
    sort(v.begin(), v.end()); // sort the array forwards
    //sort(v.rbegin(), v.rend()); // sort the array backwards
    for (const auto &element : v){
        cout << element << ' ';
    }
    return 0;
}