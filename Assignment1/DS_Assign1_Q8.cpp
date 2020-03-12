#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

void swap(int &str, int&str1) {
	char temp = str;
	str = str1;
	str1 = temp;
}

// Bubble Sort
string orderByAlphabet(string str) {
	int len = str.length();
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - 1; j++) {
			if (str[j] > str[j + 1]) {
				swap(str[j], str[j + 1]);
			}
		}
	}
	return str;
}

int main() {
	string str;
	cout << "Enter a String : "; // String without Spaces
	getline(cin,str);
	string sortedString = orderByAlphabet(str);
	cout << "String Arranged By Alphabet : "<<sortedString;
}
