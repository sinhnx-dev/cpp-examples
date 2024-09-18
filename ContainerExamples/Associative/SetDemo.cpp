#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(int count, const char* args[]){
    set<string> setOfStrings;
    setOfStrings.insert("first");
    setOfStrings.insert("second");
    setOfStrings.insert("third");
    setOfStrings.insert("abc");
    setOfStrings.insert("first");

    //print set
    for (set<string>::iterator it=setOfStrings.begin(); it!=setOfStrings.end(); ++it){
	    std::cout << ' ' << *it;
    }

    cout << endl;
    setOfStrings.erase("first");
    for (set<string>::iterator it=setOfStrings.begin(); it!=setOfStrings.end(); ++it){
	    std::cout << ' ' << *it;
    }

    return 0;
}