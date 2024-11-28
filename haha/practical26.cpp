#include <iostream>
#include <iomanip>

using namespace std; 

int main(){
	int numberOfBooks, daysOfTheLoan, daysOverdue;
	float fine;
	const int maxLoanPeriod = 14;
	const float fineRate = 0.20;


	cout << "----------------" << endl;
	cout << "BOOK LOAN SYSTEM" << endl;
	cout << "----------------" << endl;

	cout << left << setw(30) << "Enter the number of books  " << ": ";
	cin >> numberOfBooks;
	cout << setw(30) << "Enter the days of the loan  " << ": ";
	cin >> daysOfTheLoan;

	daysOverdue = daysOfTheLoan - maxLoanPeriod;
	if (daysOverdue > 0) {
		fine = numberOfBooks * daysOverdue * fineRate;
	}
	else {
		daysOverdue = 0;
		fine = 0;
	}

	cout << "-------------------------------------------" << endl;
	cout << left << setw(30) << "Days overdue  " << ": " << daysOverdue << endl;
	cout << left << setw(30) << "Fine  " << ": RM " << fixed << setprecision(2) << fine << endl;
	return 0;
}