#include <iostream>
#include <string>
using namespace std; 

int main2() {
	//variable definition
	string cust_name;
	int purch_amt, tax_code;
	float sales_tax; 

	cout << "Please state your name: ";
	getline(cin, cust_name);
	cout << "Purchase amount? : ";
	cin >> purch_amt;
	cout << "Tax code? : ";
	cin >> tax_code;

	switch (tax_code)
	{
	case 0: sales_tax = 0; break;
	case 1 || 4: sales_tax = purch_amt * 0.06; break;
	case 2: sales_tax = purch_amt * 0.10; break;
	case 3: sales_tax = purch_amt * 0.16; break;
	};
	float total_amt = purch_amt + sales_tax;
	cout << "Your name: " << cust_name << endl;
	cout << "Purchase amount: " << purch_amt << endl;
	cout << "Sales tax: RM " << sales_tax << endl;
	cout << "Total amount: " << total_amt << endl;


	return 0;
}