#include <iostream>

using namespace std; 

int main233() {

	int temp; 

	cout << "This program will tell you which activity is suitable based on temperature outside." << endl;
	cout << "What's the temperature outside? in fahrenheit): ";
	cin >> temp;

	if (temp > 85) {
		cout << "Swimming would be good" << endl;
	}
	else if (temp <= 85 && temp > 70) {
		cout << "Tennis would be good" << endl;
	}
	else if (temp > 32 && temp <= 70) {
		cout << "Golf would be good" << endl; 

	}
	else if (temp > 0 && temp <= 32) {
		cout << "Skiing would be good" << endl;
	}
	else if (temp <= 0) {
		cout << "Dancing would be good" << endl;
	}



	return 0;
}