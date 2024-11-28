#include <iostream>
#include <iomanip>
using namespace std;

int maisdfdasfsdfsdfn() {
	int N;
	cout << "Enter number: ";
	cin >> N;
	//(i)
	// it will produce
	// 12
	// 34

	//for (int i= 1; i <= N * N; i++) {
	//	cout /*<< setw(5) */<< i;
	//	if (i % N == 0) {
	//		cout << "\n";
	//	}
	//}

	//(ii)
	for (int i = 1; i <= N * N; i--) {
		cout /*<< setw(5) */ << i;
		if (i % N == 0) {
		}
	}
	return 0;
};

