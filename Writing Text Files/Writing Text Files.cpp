#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//ofstream outFile;

	fstream outFile;

	string outputFileName = "text.txt";
	//outFile.open(outputFileName);

	outFile.open(outputFileName,ios::out);

	if (outFile.is_open()) {
		outFile << "Hello there" << endl;
		outFile << 123 << endl;
		outFile.close();
	}
	else {
		cout << "Could not create file: " << outputFileName << endl;
	}

	ofstream practiceOutFile;

	string practiceOutFileName = "Repeated lines.txt";

	practiceOutFile.open(practiceOutFileName);

	if (practiceOutFile.is_open()) {
		for (int i = 1; i < 11; i++) {
			practiceOutFile << i << ". This is a line." << endl;
			
		}
		practiceOutFile.close();
	}
	else {
		cout << "Could not create file: " << outputFileName << endl;
	}
	return 0;
}

