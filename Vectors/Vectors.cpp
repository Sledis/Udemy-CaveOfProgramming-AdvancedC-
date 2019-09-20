#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	

	for (int i = 0; i < strings.size(); i++) {
		cout << strings[i] << endl;
	}

	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
		cout << *it << endl;
	}
	vector<string>::iterator it = strings.begin();
	it += 2;

	cout << *it << endl;

	vector<int> Numbers;

	for (int i = 0; i < 100; i++) {
		Numbers.push_back(i+1);
	}

	for (vector<int>::iterator it = Numbers.begin(); it != Numbers.end(); it++) {
		cout << *it << endl;
	}




	vector<double> Numbers2(20);
	cout << "Size: " << Numbers2.size() << endl;

	int capacity = Numbers2.capacity();
	cout << "Capacity: " << capacity << endl;
	for (int i = 0; i < 10000; i++) {

		if (Numbers2.capacity() != capacity) {
			capacity = Numbers2.capacity();
			cout << "Capacity: " << capacity << endl;
		}
		Numbers2.push_back(i);

	}

	Numbers2.clear();
	cout << "Size: " << Numbers2.size() << endl;

	
	cout << "Capacity: " << Numbers2.capacity() << endl;















	return 0;
}

