#include <iostream>
#include <thread>
using namespace std;

int main(int count, const char* args[]){
    int x = 9;
    thread threadObj([]{
            for(int i = 0; i < 10000; i++)
                cout<<"Display Thread Executing"<<endl;
            });
    for(int i = 0; i < 10000; i++)
        cout<<"Display From Main Thread"<<endl;
    threadObj.join();
    cout<<"Exiting from Main Thread"<<endl;
    return 0;
}
