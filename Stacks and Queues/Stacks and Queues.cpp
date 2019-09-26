#include <stack>
#include <queue>

#include <iostream>
using namespace std;

class Test {
private:
	string name;

public:
	Test(string name) :name(name) {};
	~Test() {
		cout << "Object destroyed." << endl;
	}
	void print() {
		cout << name << endl;
	}
};

int main()
{
	stack<Test> testStack;

	testStack.push(Test("Mike"));
	testStack.push(Test("John"));
	testStack.push(Test("Sue"));
	/*
	Test &test1 = testStack.top();
	test1.print();

	testStack.pop();

	Test test2 = testStack.top();
	test2.print();
	*/
	
	while (testStack.size() > 0) {
		Test& test = testStack.top();
		test.print();
		testStack.pop();
	}

	cout << endl;


	queue<Test> testQueue;

	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));
	/*
	Test &test1 = testStack.top();
	test1.print();

	testStack.pop();

	Test test2 = testStack.top();
	test2.print();
	*/

	testQueue.back().print();

	while (testQueue.size() > 0) {
		Test& test = testQueue.front();
		test.print();
		testQueue.pop();
	}

	cout << endl;


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
