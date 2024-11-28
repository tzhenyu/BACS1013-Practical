#include <iostream>

using namespace std;

int main() {
	char character; 

	cout << "Enter a character  : ";
	cin >> character;

	int toDecimal = static_cast<int>(character);
	cout << "The decimal value for " << character << " is " << toDecimal;

	return 0;
}