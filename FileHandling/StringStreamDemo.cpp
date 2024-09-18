#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){   
	stringstream ss;
	ss.str("String Stream");
	ss << "String Stream";
	string s = ss.str();
	cout << s << endl;
	
    ss >> s;
	cout << s <<endl;
	ss >> s;
	cout << endl << endl << s <<endl;
	return 0;
}
