#include <iostream>

using namespace std;

int madfgin() {
	char colour;
	int level;

	cout << "Enter a first character of a colour: ";
	cin >> colour;

	switch (colour) {
	case 'r': cout << "RED" << endl; 
		cout << "Enter a level of a colour: ";
		cin >> level;
			switch (level) {
			case 1: cout << "Caution" << endl; break;
			case 2: cout << "Dangerous" << endl; break;
			case 3: cout << "Critical" << endl; break;
			default: cout << "Invalid" << endl; break;
		}; break;
	case 'R': cout << "RED" << endl;
		cout << "Enter a level of a colour: ";
		cin >> level;
		switch (level) {
		case 1: cout << "Caution" << endl; break;
		case 2: cout << "Dangerous" << endl; break;
		case 3: cout << "Critical" << endl; break;
		default: cout << "Invalid" << endl; break;
		}; break;
	case 'g' : cout << "GREEN" << endl; break;
	case 'G': cout << "GREEN" << endl; break;
	case 'b': cout << "BLUE" << endl; break;
	case 'B': cout << "BLUE" << endl; break;
	default: cout << "BLACK" << endl; break;
	}

	return 0;
}