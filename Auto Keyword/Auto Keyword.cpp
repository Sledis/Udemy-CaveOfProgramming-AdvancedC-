#include <iostream>
using namespace std;

template<class T>
auto test(T value){
	return value;
}


int main()
{
	auto value = 7;
	auto text = "Hello";

	cout << test("Hello there") << endl;



    
}

