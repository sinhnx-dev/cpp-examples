#include <iostream>
#include <thread>
using namespace std;

void thread_function();
int main(int count, const char* args[]){
    thread threadObj(thread_function);
    for(int i = 0; i < 10000; i++)
        cout<<"Display From MainThread"<<endl;
    threadObj.join();    
    cout<<"Exit of Main function"<<endl;
    return 0;
}
void thread_function(){
    for(int i = 0; i < 10000; i++)
        cout<<"thread function Executing"<<endl;
}