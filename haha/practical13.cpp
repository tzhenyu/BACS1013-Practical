#include <iostream>
#include <string>

using namespace std; 

int mainkfjfkjfkf() {
	// declared string constants ODD_ROW and EVEN_ROW for different row patterns
	// put "\n" at the end of the pattern for cleaner code
	const string ODD_ROW = " * * * *\n";
	const string EVEN_ROW = "* * * * \n";

	// display output with 2 rows in a line * 4
	cout << ODD_ROW << EVEN_ROW;
	cout << ODD_ROW << EVEN_ROW;
	cout << ODD_ROW << EVEN_ROW;
	cout << ODD_ROW << EVEN_ROW;

	return 0;
}