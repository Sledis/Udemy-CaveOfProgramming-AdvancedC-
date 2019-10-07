
#include <iostream>
using namespace std;

struct Test {
	virtual bool operator()(string& text) = 0;
};

struct MatchTest : public Test{
	virtual bool operator()(string &text) {
		return text == "Lion";
	}
};

void check(string text, Test &test) {
	if (test(text)) {
		cout << "Text matches!" << endl;
	}
	else {
		cout << "No match!" << endl;
	}
}

int main()
{
	MatchTest pred;
	string value = "Lion";

	MatchTest m;

	check("lion", m);
	cout << pred(value) << endl;
}

