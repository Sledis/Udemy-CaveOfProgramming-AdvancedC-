#include <iostream>
#include <map>

using namespace std;


int main()
{
	map<string, int> ages;

	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;

	ages["Mike"] = 70;

	pair<string, int> addToMap("Peter", 100);
	ages.insert(addToMap);

	ages.insert(make_pair("Sam", 23));
	cout << ages["Raj"] << endl;

	if (ages.find("Vicky1") != ages.end()) {
		cout << "Found Vicky." << endl;
	}
	else {
		cout << "Key not found." << endl;
	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		cout << it->first << ": " << it->second << endl;


	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		pair<string, int> age = *it;

		cout << age.first << ": " << age.second << endl;
	}

	return 0;
}
