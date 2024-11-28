#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int days, week;
    cout << "Enter the number of days : ";
    cin >> days; 
    week = days % 7;
    cout << days << " days = " << days/7 << " weeks, " << week << " days." << endl;
    return 0;
}
