#include <iostream>
#include "ring.h"
using namespace std;




int main()
{



	
	ring<string> textring(3);

	textring.add("one");
	textring.add("two");
	textring.add("three");


	//for (int i = 0; i < textring.size(); i++) {
		//cout << textring.get(i) << endl;
	//}
//
	
	for (auto it = textring.begin(); it != textring.end(); it++) {
		cout << *it << endl;
	}
	
	cout << endl;

	for (string value : textring) {
		cout << value << endl;
	}

	return 0;
}

