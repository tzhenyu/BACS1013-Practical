#include <iostream>

using namespace std;

int ddsdsdmain() {


	while (true) {
		int num;
		cout << "type integer between 10 to 50: (if you wanna stop, just close the program.) " << endl;
		cin >> num;

		


		if (num <= 50 && num >= 10) {
			cout << "\nvalid \n-----\nDone.\n" << endl;
		}
		else {
			cout << "\ninvalid \n-----\nDone.\n" << endl;
		}
		
	}

	return 0;
}