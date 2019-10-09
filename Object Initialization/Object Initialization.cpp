
#include <iostream>

using namespace std;

class Test {
	int id=8;
	string name{"Mike"};

public:
	Test() = default;
	Test(int id) : id(id) {};
	Test(const Test& other) = delete;
	Test& operator=(const Test& other) = delete;

	void print() {
		cout << id << ": " << name << endl;
	}


};


int main()
{
	Test test;
	test.print();

	Test test1(77);
	test1.print();


	// Won't work as we deleted these properties.
	//Test test2 = test1;
	//test2 = test;
}


