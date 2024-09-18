#include <iostream>
#include <exception>

using namespace std;

class DivisionException : public exception{
    const char* what() const noexcept{
        return "Division by zero";
    }
}; 

double division(double a, double b);

int main(int count, const char* args[]){
    try{
        cout << division(12, 0) << endl;
    }catch(exception& ex){
        cerr << "EXCEPTION: " << ex.what() << endl;
    }
    return 0;
}

double division(double a, double b){
    if(b == 0){
        //throw exception();
        throw DivisionException();
    }
    return a/b;
}