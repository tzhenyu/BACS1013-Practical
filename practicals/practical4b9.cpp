#include <iostream>
#include <cmath>
using namespace std;

int mainsfdsdfsdf() {

	int num;

	cout << "Enter a number: ";
	cin >> num;


	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			cout << i << " ";
		}
	}

	return 0;
}