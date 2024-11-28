#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

int main22() {
    double height, length, area;

    // Prompt user for height and length of the triangle
    cout << "Enter the height of the triangle: ";
    cin >> height;

    cout << "Enter the length of the triangle: ";
    cin >> length;

    // Calculate the area
    area = 0.5 * height * length;

    // Display the result
    cout << endl;
    cout << "Area of triangle" << endl;
    cout << "---------------------------" << endl;
    cout << "Height : " << setw(10) << height << " cm" << endl;
    cout << "Length : " << setw(10) << length << " cm" << endl;
    cout << "Area   : " << setw(10) << area << " cm" << endl;

    return 0;
}