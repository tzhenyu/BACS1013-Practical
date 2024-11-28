#include <iostream>
#include <iomanip>

using namespace std;

int maasdin() {
	int num; 
	int numProduct = 1;
	while (true) {
		cout << "Enter a number: ";
		cin >> num;
		if (num > 0) {
			numProduct *= num;
		}
		else {
			cout << "The product of all your positive numbers is " << numProduct;
			break;
		}
	}
	return 0;
}