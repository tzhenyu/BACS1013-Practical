#include <iostream>
#include <iomanip>

using namespace std; 

int main() {
	double floatingNum, fractionalPart, integralPart;

	cout << "Enter a floating-point number > ";
	cin >> floatingNum;

	//used modf function to split the float
	fractionalPart = modf(floatingNum, &integralPart);

	cout << setw(20) << left << "Its integral part" << ": ";
	cout << integralPart << endl;

	cout << setw(20) << left << "Its fractional part" << ": ";
	cout << fractionalPart << endl;
	return 0;
};