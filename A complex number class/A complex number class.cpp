

#include <iostream>
#include "Complex.h"
using namespace std;
using namespace caveofprogramming;

int main()
{
	Complex c1(2,3);
	Complex c2 = c1;

	c1 = c2;

	cout << c1 << endl;

	cout << c1 + c2 << endl;
	
	Complex c4(4, 3);

	cout << c4 + 7 << endl;
	cout << 3.2 + c4 << endl;

	Complex c6(3, 3);

	if (c1 == c6) {
		cout << "Equal" << endl;
	}
	else {
		cout << "Not equal" << endl;
	}
	if (c1 != c6) {
		cout << "Not Equal" << endl;
	}
	else {
		cout << "Equal" << endl;
	};
	cout << *c1 << endl;

	return 0;
}
