#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	cout << setw(5) << "*" << endl;
	cout << setw(3) << "*" << setw(4) << "*" << endl;
	cout << setw(2) << "*" << setw(6) << "*" << endl;
	cout << setw(3) << "*" << setw(4) << "*" << endl;
	cout << setw(5) << "*" << endl;

	return 0;
}