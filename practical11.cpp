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

    cout << setw(10) << "ABC" << endl;
    cout << setfill('#') << setw(10) << "ABC" << endl;
    cout << left << setfill('@') << setw(6) << "ABC" << endl;
    cout << fixed << setprecision(2) << 123.456 << endl;
    cout << setprecision(7) << showpoint << 123.45 << endl;
    cout << setprecision(5) << 123.5748 << endl << setprecision(6) << 123.5748 << endl;
