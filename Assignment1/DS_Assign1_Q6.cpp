#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

void extractString(string str, int sublen, int start) {
	int len = str.length();
	if (start + sublen >  len) {
		throw string("Array Out Of Bound Exception");
	}
	if (start < 0 || sublen < 0)
		throw string("Negative Numbers Not Allowed");
	for (int i = (start - 1); i < (start + sublen - 1); i++) {
		cout << str[i];
	}
}

int main() {
	string str;
	int len, start;
	cout << "Enter a String : "; // String without Spaces
	getline(cin, str);
	cout << "Enter Number of Characters To be Extracted : ";
	cin >> len;
	cout << "Enter Start Character Number :";
	cin >> start;
	try {
		extractString(str, len, start);
	} catch (string &strException) {
		cout << strException << endl;
	} catch (string &strException) {
		cout << strException << endl;
	}
}
