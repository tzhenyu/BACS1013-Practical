#include <iostream>

using namespace std; 

int main() {
	float celcius, fahrenheit, temp;

	cout << "type a number from celcius: ";
	cin >> celcius;

	fahrenheit = 32 + (celcius * (180.0 / 100.0));
	cout << "it is " << fahrenheit << " fahrenheit." << endl;
	return 0;
}