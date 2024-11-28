#include <iostream>
#include <iomanip>
using namespace std; 

int main2222(){
	float hourlyWage, hourWorked,OTPay, total;

	cout << "Enter hourly wage: ";
	cin >> hourlyWage; 
	cout << "Enter hours: ";
	cin >> hourWorked;

	if (hourWorked > 40) {
		OTPay = hourlyWage * ((hourWorked - 40) * 0.5);
	}
	else {
		OTPay = 0;
	}

	total = (hourWorked * hourlyWage) + OTPay;

	// to display value in 2 decimal point
	cout << fixed << setprecision(2);
	cout << "You have earned: RM" << total << endl;

	if (hourWorked < 40) {
		cout << "\nYou are underworked." << endl;
	}
	return 0;
}