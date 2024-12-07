#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string name, carPlate;
	char carType, continueProgram = ' ';
	int financeYear;
	int applicant = 1;

	int loan, loanSum= 0;

	while (continueProgram != 'N') {

		cout << "Name: ";
		getline(cin, name);
		cout << "Vehicle No: ";
		cin >> carPlate;
		cout << "Vehicle Type: ";
		cin >> carType;
		cout << "Financing Term (Years): ";
		cin >> financeYear;

		switch (carType) {
		case 'T': if (financeYear >= 20) loan = 20000; else loan = 15000; break;
		case 'H': if (financeYear >= 10) loan = 18000; else loan = 12000; break;
		case 'P': if (financeYear >= 5) loan = 10000; else loan = 8000; break;
		}

		cout << fixed << setprecision(2);
		cout << "\nApplicant " << applicant << endl;
		cout << setw(15) << setfill('-') << '-' << endl;
		cout << setfill(' ');
		cout << setw(23) << left << "Name:" << right << setw(10) << name << endl;
		cout << setw(23) << left << "Vehicle No:" << setw(10) << right << carPlate << endl;
		cout << setw(23) << left << "Vehicle Type:" << setw(10) << right << carType << endl;
		cout << setw(23) << left << "Financing Term (Years):" << setw(10) << right << financeYear << endl;
		cout << setw(23) << left << "Loan (RM):" << setw(10) << right << loan << endl;

		loanSum += loan;

		cout << "\nDo you want to continue? ";
		
		cin >> continueProgram;
		cin.ignore();

		switch (continueProgram) {
		case 'Y': applicant++; break;
		case 'N': cout << "\n\nSummary \n" << setw(12) << setfill('-') << '-' << setfill(' ') 
					   << setw(22) << left << "\nNumber of applicants:" << setw(10) << right << applicant 
					   << setw(22) << left << "\nTotal Loan (RM): " << right << setw(10) << setfill('*') << loanSum; break;

		}

		
		

	}






	return 0;
}