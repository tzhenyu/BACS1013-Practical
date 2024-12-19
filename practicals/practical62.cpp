#include <iostream>
#include <string>
using namespace std;

int main() {
	string text = "a string of text";
	char text2[50] = "a string of text";
	cout << "converted from string class: ";

	for (auto x : text) {
		cout << (char)toupper(x);
	}

	cout << "\n\nconverted from c string class: ";

	for (int i = 0; i < size(text); i++) {
		cout << static_cast<char>(toupper(text[i]));
	}



	cout << "\n\n\n\n\n\n\n" << endl;

	return 0;
}