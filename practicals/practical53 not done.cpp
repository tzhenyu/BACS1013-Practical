#include <iostream>

using namespace std; 

int main() {

	char s[10] = "abcde";
	char* cptr;

	for (int i = 0; i < size(s); i++) {
		cout << s[i] << endl;
		remove(s, 1);
	}
	//for(int i = )
	return 0;
}