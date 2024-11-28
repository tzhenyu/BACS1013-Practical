#include <iostream>

using namespace std;

int mat77in() {
	int count = 0, num; 
	cout << "Initial value is ";
	cin >> num; 

	while (num != 1) {
		if (num % 2 == 0) {
			num = num / 2;
			cout << "Next value is " << num << endl;
		}
		else {
			num = (num * 3) + 1;
			cout << "Next value is " << num << endl;
		}
		count++;
	}

	cout << "Final value 1, number of steps " << count;

	return 0;
}