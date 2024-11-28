#include <iostream>

using namespace std; 

int msdfsdffsdain() {
	int flag;

	cout << "Enter a value: ";
	cin >> flag;

	switch (flag) {
	case 1: cout << "HOT" << endl; break;
	case 2: cout << "WARM" << endl; break;
	case 3: cout << "COLD" << endl; break;
	default: cout << "OUT OF RANGE" << endl; break;
	}

	return 0;
}