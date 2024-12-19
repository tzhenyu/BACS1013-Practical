#include <iostream>

using namespace std; 

int main() {


	char text = ' ';

	while (true) {
		cin >> text;


		if (isalpha(text)) {
			if (toupper(text) == 'A' || toupper(text) == 'E' || toupper(text) == 'I' || toupper(text) == 'O' || toupper(text) == 'U') {
				cout << "you typed vocal. " << endl;
			}
			else {
				cout << "you did not typed vocal." << endl;
			}
			text = ' ';
		}
		if (isdigit(text)) {
			if (text == '9') {
				break;
			}
			cout << "dude, i asked for character, not num !" << endl;
		} text = ' ';

	}

	return 0;
}