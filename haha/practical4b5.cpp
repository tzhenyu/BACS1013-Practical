#include <iostream>

using namespace std;

int mai234n() {
	int num;
	char prime;
	cout << "int please: ";
	cin >> num;

	if (num < 2) {
		prime = 'F';
	}
	else {
		prime = 'T';
		for (int i = 2; i >= 0; i--) {
			if (num % i == 0) {
				prime = 'F';
				break;
			}
		}
	}

	if (prime == 'T') {
		cout << num << " is a prime number";
	}
	else {
		cout << num << " is not a prime number";
	}
		
	return 0;
}