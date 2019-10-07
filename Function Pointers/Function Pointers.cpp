

#include <iostream>
using namespace std;

void test(int value) {
	cout << "Hello: " << value << endl;
}


int main()
{


	void (*pTest)(int) = test;

	pTest(3);

	return 0;
}

