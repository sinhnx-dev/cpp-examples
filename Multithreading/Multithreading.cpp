#include <iostream>
#include <thread>
using namespace std;

void thread_function();

int main(int count, const char* args[]){
    thread threadObj1(thread_function);
    thread threadObj2(thread_function);
 
    if(threadObj1.get_id() != threadObj2.get_id())
        cout<<"Both Threads have different IDs:"<<endl;
 
    cout<<"From Main Thread :: ID of Thread 1 = "<<threadObj1.get_id()<<endl;    
    cout<<"From Main Thread :: ID of Thread 2 = "<<threadObj2.get_id()<<endl;    
 
    threadObj1.join();    
    threadObj2.join();    
    return 0;
}
void thread_function(){
    cout<<"Inside Thread :: ID  = "<<this_thread::get_id()<<endl;    
}