#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
 
void threadFunc();
int main(int count, const char* args[]){
	thread th(&threadFunc);
    th.join();
    cout<<"END MAIN THREAD!"<<endl;
	return 0;
}
void threadFunc(){
	int i = 0;
	while (i < 10){
		// Print Thread ID and Counter i
		cout<<this_thread::get_id()<<" :: "<<i++<<endl;
 
		// Sleep this thread for 200 MilliSeconds
		this_thread::sleep_for(chrono::milliseconds(200));
	}
}
