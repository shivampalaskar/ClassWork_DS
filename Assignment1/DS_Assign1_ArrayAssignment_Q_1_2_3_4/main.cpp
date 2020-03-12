/*
 * main.cpp
 *
 *  Created on: 11-Mar-2020
 *      Author: Shivam Palaskar
 */
#include <iostream>
#include "Array.h"
#include "Iterative.h"
#include "Recursive.h"
#include "Sorting.h"
using namespace std;

int menuList() {
	int choice;
	cout << "0. Exit" << endl;
	cout << "1. Insert Array Elements" << endl;
	cout << "2. Display Array Elements" << endl;
	cout << "3. Iterative Print" << endl;
	cout << "4. Recursive Print" << endl;
	cout << "5. Iterative Linear Search" << endl;
	cout << "6. Recursive Linear Search" << endl;
	cout << "7. Iterative Binary Search" << endl;
	cout << "8. Recursive Binary Search" << endl;
	cout << "9. Bubble Sort" << endl;
	//cout << "9. Selection Sort" << endl;
	cout << "Enter Choice : ";
	cin >> choice;
	return choice;
}

int getKey() {
	int key;
	cout << "Enter Element To Search: ";
	cin >> key;
	return key;
}

int main() {
	int choice, startIndex = 0, key;
	Array array;
	Iterative itr;
	Recursive rcsv;
	Sorting sort;

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
			key = getKey();
			itr.linearSearch(array.getArr(), array.getLen(), key);
			break;
		}
		case 6: {
			key = getKey();
			rcsv.linearSearch(array.getArr(), array.getLen(), key, startIndex);
			break;
		}
		case 7:
			key = getKey();
			itr.binarySearch(array.getArr(), array.getLen(), key);
			break;
		case 8:
			key = getKey();
			rcsv.binarySearch(array.getArr(),startIndex,array.getLen(),key);
			break;
		case 9:
			sort.sort(array.getArr(), array.getLen());
			break;
		}
	}
}
