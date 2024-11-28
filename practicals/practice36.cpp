#include <iostream>
#include <iomanip>
#define PI 3.142
using namespace std;

int main() {
	float radius, height, cost;
	int amount;
	cout << "Please enter the radius of the cylinder (in cm) : ";
	cin >> radius;
	cout << "Please enter the height of the cylinder (in cm) : ";
	cin >> height;
	cout << "Please enter the cost of the material (in RM/cm2) : ";
	cin >> cost;
	cout << "Please enter the amount of cylinder : ";
	cin >> amount;

	float surfaceArea, totalCost;
	surfaceArea = (PI * radius * radius) + (2 * PI * radius * height);
	totalCost = amount * cost * surfaceArea;

	cout << fixed << setprecision(2);
	cout << "The total cost for producing " << amount << " containers with " << radius << " cm radius and " << height << " cm height is RM " << totalCost << "." << endl;

	return 0;
}