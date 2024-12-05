#include <iostream>

using namespace std; 

int main() {
	int lowerLimit, upperLimit;
	int sum = 0;
	int squares;

	cout << "Enter lower and upper integer limits >";
	cin >> lowerLimit >> upperLimit;
	for (int i = lowerLimit; i <= upperLimit; i++) {
		squares = i * i;
		sum += squares;
	}
	cout << "The sums of the squares from " << lowerLimit << " to " << upperLimit << " is " << sum << endl;

	while (true) {


		sum = 0;
		cout << "\nEnter next set of limits >";
		cin >> lowerLimit >> upperLimit;

		if (lowerLimit == upperLimit) {
			cout << "Ended" << endl;
			break;
		}
		else {
			for (int i = lowerLimit; i <= upperLimit; i++) {
				squares = i * i;
				sum += squares;
			}
		}
		cout << "The sums of the squares from " << lowerLimit << " to " << upperLimit << " is " << sum << endl;

		
	}
	
	return 0;
}