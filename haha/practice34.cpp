#include <iostream>

using namespace std;

int main() {
	int num;
	cout << "Enter 4-digit integer  : ";
	cin >> num;

	int digit1, digit2, digit3, digit4;

	digit1 = (num / 1000)*1000;
	digit2 = ((num / 100) % 10)*100;
	digit3 = ((num / 10) % 10)*10;
	digit4 = num % 10;

	cout << digit1 << " + " << digit2 << " + " << digit3 << " + " << digit4 << endl;

	return 0;
}