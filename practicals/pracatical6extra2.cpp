#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 

int main() {

	string text;
	
	int lowerCount = 0;
	int upperCount = 0;
	int spaceCount = 0; 
	int digitCount = 0; 
	int otherCount = 0;

	cout << "enter a line of text: ";
	getline(cin, text);


	cout << "\nThe text you have entered is: " << text << endl;

	cout << setw(20) << left << "\nText" << setw(5) << "Count" << endl;
	cout << setw(25) << setfill('-') << '-' << endl;

	cout << setfill(' ');


	for (int i = 0; i < size(text); i++) {


		if (islower(text[i])) {
			lowerCount++;
		}
		else if (isupper(text[i])) {
			upperCount++;
		}
		else if (isspace(text[i])) {
			spaceCount++;
		}
		else if (isdigit(text[i])) {
			digitCount++;
		}
		else {
			otherCount++;
		}
	}
	cout << endl; 
	cout << setw(19) << left << "Upper case" << setw(5) << upperCount << endl;
	cout << setw(19) << left << "Lower case" << setw(5) << lowerCount << endl;
	cout << setw(19) << left << "Space" << setw(5) << spaceCount << endl;
	cout << setw(19) << left << "Digit" << setw(5) << digitCount << endl;
	cout << setw(19) << left << "Others" << setw(5) << otherCount << endl;


	return 0;
}