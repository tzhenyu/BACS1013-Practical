#include <iostream>
#include <string>
using namespace std; 

int main() {
	string name;

	cout << "Welcome to TAR University College \nI'm a C++ program" << endl;
	cout << "What is your name? ";
	getline(cin, name);
	cout << "Hi, " << name << ". How are you?";

	return 0;
}
