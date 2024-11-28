#include <iostream>

using namespace std; 

int mainwwww() {
	float num1, num2, num3; 

	cout << "Please enter 3 numbers: ";
	cin >> num1 >> num2 >> num3; 

	//sum, product, average of these numbers
	float sum = num1 + num2 + num3;
	float product = num1 * num2 * num3; 
	float average = sum / 3;
	
	//get smllest and largest num
	float smallest = 0, largest = 0;

	if (num1 > num2 && num1 > num3) {
		largest = num1;
	}

	cout << "Sum: " << sum << endl;
	cout << "Product: " << product << endl;
	cout << "Average: " << average << endl;
	cout << "Smallest: " << smallest << endl;
	cout << "Largest: " << largest << endl;

	return 0;
}