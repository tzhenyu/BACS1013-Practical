#include <iostream>

using namespace std; 

int main() {
	double floatNum = 9.6;
	int	intNum = 3;
	char character = 'A';

	double* pFloat = &floatNum;
	int* pInt = &intNum;
	char* pChar = &character;

	cout << "Value of float is " << floatNum << endl;
	cout << "Address of float is " << pFloat << endl;
	cout << "Size of float is " << sizeof(floatNum) << endl;
	
	cout << "\nValue of integer is " << intNum << endl;
	cout << "Address of integer is " << pInt << endl;
	cout << "Size of integer is " << sizeof(intNum) << endl;
	
	cout << "\nValue of character is " << character << endl;
	cout << "Address of character is " << static_cast <void*>(pChar) << endl;
	cout << "Size of character is " << sizeof(pChar) << endl;


	return 0;
}