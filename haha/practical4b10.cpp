#include <iostream>

using namespace std;

int werwerwerwermain() {

		//How to find digits ?
		//imagine a number, 26556, which has 5 digits.
		//try to find the remainder of the number with power of 10.
		//26556 % 10^1 = 6
		//26556 % 10^2 = 56
		//26556 % 10^3 = 556
		//26556 % 10^4 = 6556
		//26556 % 10^5 = 26556 <- the remainder is == num, 26556.
		//           ^
		//           |
		//from this, you can found that it need to times 5 to get the same,
		//which has the same digit as the number.

	int num;
	// is 1 because 26556 % 10^1 = 6, this 1 is counted as digit
	int digit = 1;
	int powerOf10 = 10;

	cout << "			Enter an integer > ";
	cin >> num; 

	do {
		digit++;
		powerOf10 *= 10;

	} while (num % powerOf10 != num);

	cout << "Number " << num << " contains " << digit << " digit(s)";

	return 0;
}