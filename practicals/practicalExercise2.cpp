#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	string name, session;
	
	char membershipType = ' ';
	char continueRun = 'Y';
	int workoutHour, incentivePoint;
	int incentiveSum;
	int member = 1;

	while (continueRun == 'Y') {
		cout << "Name: ";
		getline(cin, name);
		cout << "Session: ";
		cin >> session;
		cout << "Type: ";
		cin >> membershipType;
		cout << "Hour: ";
		cin >> workoutHour;


		switch (membershipType) {
		case 'G': if (workoutHour >= 30) incentivePoint = 100; else incentivePoint = 80; break;
		case 'S': if (workoutHour >= 20) incentivePoint = 70; else incentivePoint = 50; break;
		case 'B': if (workoutHour >= 15) incentivePoint = 40; else incentivePoint = 20; break;
		default: cout << '\a' << "Invalid type!" << endl; break;
		}

		cout << "\nMember " << member << endl;
		cout << setw(10) << setfill('-') << '-' << endl;
		cout << setfill(' ');
		cout << left << setw(20) << "Name:" << setw(10) << right << setw(5) << name << endl;
		cout << setw(20) << left << "Session:" << setw(10) << right << setw(5) << session << endl;
		cout << setw(20) << left << "Type:" << setw(10) << right << setw(5) << membershipType << endl;
		cout << setw(20) << left << "Hour:" << setw(10) << right << setw(5) << workoutHour << endl;
		cout << setw(20) << left << "Incentive Point:" << setw(10) << right << setw(5) << incentivePoint << endl;

		incentiveSum = +incentivePoint;

		cout << "\nDo you want to continue? ";
		cin >> continueRun;
		cin.ignore();

		switch (continueRun) {
		case 'Y': member++; break;
		case 'N': cout << "\n\nSummary" << "\n" << setw(10) << setfill('-') << '-' << endl;

			cout << setw(15) << left << "Number of member: " << setfill(' ') << right << setw(15) << member << endl;

			cout << setw(15) << left << "Total point: " << setw(15) << setfill('*') << right << setw(15) << incentiveSum << endl; break;

		}
	}


	return 0;
}