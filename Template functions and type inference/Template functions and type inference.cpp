#include <iostream>

using namespace std;

template<class T>
void print(T n) {
	cout << n << endl;
}

void print(int value) {
	cout << "Non-template version: " << value << endl;
}


int main()
{
	print<string>("Hello");
	print<int>(5);

	print("Hi there");
	print(5);

	return 0;
}

