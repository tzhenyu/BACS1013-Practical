#include <iostream>
#include <iomanip>
#define PI 3.14159
using namespace std; 

int main() {
	double radius, circumference;

	cout << "Give me a radius of a circle: ";
	cin >> radius;
	circumference = 2 * PI * radius; 
	cout << fixed << setprecision(2) << "The circumference of the circle is: " << circumference << endl;
	return 0;
};