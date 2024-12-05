#include <iostream>

using namespace std;

int main() {

	int num, num1;
	int smallest; 
	int counter = 0; 
	cout << "Enter nums >";
	while (true) {
		
		cin >> num;  
		smallest = num; 

		if (smallest == num) {
			counter++;
		}

		if (num == -999) {
			break;
		}
	

	}

	cout << "The smallest value is " << smallest << " and it was entered " << counter << " time(s).";

	return 0;
}