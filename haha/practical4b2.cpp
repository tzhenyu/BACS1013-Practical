#include <iostream>
#include <iomanip>

using namespace std;

int mainddddddd() {

	int firstNum, secondNum;

	cout << "Give me 2 numbers: ";
	cin >> firstNum >> secondNum;

	for (int count = firstNum; count <= secondNum; count++) {
		if (count % 2 == 1) {
			cout << count << " ";
		}
	}
	return 0;
}