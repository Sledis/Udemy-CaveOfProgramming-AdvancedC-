
#include <iostream>
#include <exception>

using namespace std;

void goesWrong() {
	bool error1Detected = true;
	bool error2Detected = false;

	if (error1Detected) {
		throw bad_alloc();
	}

	if (error2Detected) {
		throw exception();
	}
}

int main()
{
	try {
		goesWrong();
	}
	catch (exception& e) {
		cout << e.what() << endl;
		//N.B. this doesn't work the way you think because bad_alloc is a derived class of exception
		cout << "Catching Exception" << endl;
	}
	catch (bad_alloc& e) {
		cout << e.what() << endl;
		cout << "Catching bad alloc" << endl;
	}
	return 0;
}

