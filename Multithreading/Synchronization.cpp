#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
using namespace std;

mutex m;//door handle
void makeACall();
int main(){
	//create 3 persons who want to make a call from call box
	thread person1(makeACall);
	thread person2(makeACall);
	thread person3(makeACall);
	if (person1.joinable()){
		person1.join();
	}
	if (person2.joinable()){
		person2.join();
	}
	if (person3.joinable()){
		person3.join();
	}
}
void makeACall(){
	m.lock();//person enters the call box and locks the door
	//now it can talk to his friend without any interruption
    cout << " Hello my friend, this is " << this_thread::get_id() << endl;
    // Sleep this thread for 200 MilliSeconds
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "End of thead with id: " << this_thread::get_id() << endl;
	//this person finished to talk to his friend
	m.unlock();//and he leaves the call box and unlock the door
}

