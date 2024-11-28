#include <iostream>
using namespace std;

int main()
{	
	cout << "A)" << endl;
	int a, b = 7, c = 3;

	a = ++b - ++c;
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

	a = b-- - --c;
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

	a = b++ + c--;
	cout << "a = " << ++a << ", b = " << ++b << ", c = " << c-- << endl;

	cout << "B)" << endl;
	int d = 6, e = 4, f = 5, g = 9;

	d = ++e - --g / f--;
	cout << "a = " << d << ", b = " << e << ", c = " << f
		<< ", d = " << g << endl;

	g += ++d - (e % --f);
	cout << "a = " << d << ", b = " << e << ", c = " << f
		<< ", d = " << g << endl;

	f -= d++ * --e;
	cout << "a = " << d << ", b = " << e << ", c = " << f
		<< ", d = " << g << endl;

	return 0;
}