#include <iostream>
using namespace std;

class Animal {
public:
	virtual void run() = 0;
	virtual void speak() = 0;
};

class Dog: public Animal {
public:
	virtual void speak() {
		cout << "Woof!" << endl;
	}
};

class Labrador :public Dog {
public:
	virtual void run() {
		cout << "Labrador running" << endl;
	}
};

int main()
{

	Labrador lab;
	lab.speak();
	lab.run();
	return 0;
}

