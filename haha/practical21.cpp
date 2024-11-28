#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//question 1a
	int a = 26;
	cout << "\nquestion 1a" << endl;
	//this one below is to show what int type is
	cout << setw(6) << left << "dec";
	cout << setw(6) << left << "hex";
	cout << setw(6) << left << "oct" << endl;
	//this one below is answer to question 1a
	cout << setw(6) << left << dec << a;
	cout << setw(6) << left << hex << a;
	cout << setw(6) << left << oct << a << endl;

	//question 1b
	double b = 2.2;
	cout << "\nquestion 1b" << endl;
	cout << fixed << setprecision(4) << showpos << b << endl;
	cout << fixed << setprecision(4) << showpos << scientific << b << endl;

	//question 1c
	string c = "^^";
	cout << "\nquestion 1c" << endl;
	cout << right << setw(25) << setfill('*') << c;
	return 0;
};
