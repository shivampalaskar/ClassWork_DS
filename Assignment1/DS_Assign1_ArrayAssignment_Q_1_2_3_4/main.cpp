/*
 * main.cpp
 *
 *  Created on: 11-Mar-2020
 *      Author: shiva
 */
#include <iostream>
#include "Array.h"
#include "Iterative.h"
#include "Recursive.h"
using namespace std;

int menuList() {
	int choice;
	cout << "0. Exit" << endl;
	cout << "1. Insert Array Elements" << endl;
	cout << "2. Display Array Elements" << endl;
	cout << "3. Iterative Print" << endl;
	cout << "4. Recursive Print" << endl;
	cout << "5. Iterative Search" << endl;
	cout << "6. Recursive Search" << endl;
	cout << "Enter Choice : ";
	cin >> choice;
	return choice;
}

int main() {
	int choice, startIndex = 0;
	Array array;
	Iterative itr;
	Recursive rcsv;

	while ((choice = menuList()) != 0) {
		switch (choice) {
		case 1:
			array.insertElement();
			break;
		case 2:
			array.displayElements();
			break;
		case 3:
			itr.display(array.getArr(), array.getLen());
			break;
		case 4:
			rcsv.display(array.getArr(), array.getLen(), startIndex);
			break;
		case 5: {
			int key;
			cout << "Enter Element To Search: ";
			cin >> key;
			itr.search(array.getArr(), array.getLen(), key);
			break;
		}
		case 6: {
			int key;
			cout << "Enter Element To Search: ";
			cin >> key;
			rcsv.search(array.getArr(), array.getLen(), key, startIndex);
			break;
		}

		}
	}
}
