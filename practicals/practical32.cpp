#include <iostream>

using namespace std; 

int main() {
	int num;
	cout << "Enter 4-digit integer  : ";
	cin >> num;

	int digit1, digit2, digit3, digit4;

	digit1 = num / 1000;
	digit2 = (num / 100) % 10;
	digit3 = (num / 10) % 10;
	digit4 = num % 10;

	cout << "1st digit  : " << digit1<< endl;
	cout << "2nd digit  : " << digit2<< endl;
	cout << "3rd digit  : " << digit3<< endl;
	cout << "4th digit  : " << digit4<< endl;

	return 0;
}