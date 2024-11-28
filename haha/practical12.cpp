#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

int mainla() {
	string name; 
	int age; 
	char gender;
	float income;

	cout << "Input\n-------" << endl;
	cout << "Enter <name> <age> <gender> <income> :";
	cin >> name >> age >> gender >> income;

	cout << "\nOutput\n-------" << endl;
	cout << setw(7) << left << "Name" << ":  " << name << endl;
	cout << setw(7) << left << "Age" << ":  " << age << endl;
	cout << setw(7) << left << "Gender" << ":  " << gender << endl;
	cout << setw(7) << left << "Income" << ":  " << income << endl;

	return 0;
}