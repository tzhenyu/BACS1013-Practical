#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int upperNum, lowerNum;
	int powerBy2, sumSquare = 0;
	int i = 1;
	cout << "Enter lower and upper integer limits: ";
	cin >> lowerNum >> upperNum;

	do {

		powerBy2 = i * i;
		sumSquare += powerBy2;
		break;

	} while (lowerNum != upperNum || upperNum < lowerNum);



	//do {
	//	cout << "Enter the next limits: ";
	//	cin >> lowerNum >> upperNum;

	//	if ((lowerNum == upperNum) || (upperNum < lowerNum)) {
	//		cout << "Ended";
	//		break;
	//	}
	//	else {
	//		powerBy2 = i * i;
	//		sumSquare += powerBy2;
	//	}

	//} while (i <= upperNum);



	cout << "The sums of the squares from " << lowerNum << " to " << upperNum << " is " << sumSquare;
	return 0;
}