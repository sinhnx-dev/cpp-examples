#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
 
// Print Current Time
void print_time_point(chrono::system_clock::time_point timePoint);
void threadFunc();

int main(int count, const char* args[]){
	thread th(&threadFunc);
	th.join();
	return 0;
}
void print_time_point(chrono::system_clock::time_point timePoint){
	time_t timeStamp = chrono::system_clock::to_time_t(timePoint);
	cout << ctime(&timeStamp) <<  endl;
}
void threadFunc(){
    cout<<"Current Time :: ";
	// Print Current Time
	print_time_point( chrono::system_clock::now());
	// create a time point pointing to 10 second in future
	chrono::system_clock::time_point timePoint = chrono::system_clock::now() +  chrono::seconds(10);
    cout << "Going to Sleep Until :: ";
    print_time_point(timePoint);
	// Sleep Till specified time point
	// Accepts  chrono::system_clock::time_point as argument
	this_thread::sleep_until(timePoint);
	cout<<"Current Time :: ";
	// Print Current Time
	print_time_point( chrono::system_clock::now());
}