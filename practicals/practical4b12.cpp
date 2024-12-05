#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int num;

	cout << "Multiplication table of what number? ";
	cin >> num; 

	for (int i = 1; i <= 12; i++) {
		cout << num << " X " << setw(2) << i << " = " << setw(4) << (num * i) << endl;
	}
	return 0;
}