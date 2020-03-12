/*
 * Recursive.cpp
 *
 *  Created on: 12-Mar-2020
 *      Author: Shivam Palaskar
 */

#include <iostream>
#include <iomanip>
#include "Recursive.h"
using namespace std;

Recursive::Recursive() {
}

int Recursive::display(int *arr,int len,int Index) {
	if(Index >= len)
		return 0;
	if(Index == 0)
		cout<<"Array Elements : ";
	cout<<left<<setw(3)<<arr[Index];
	display(arr,len,Index+1);
	if(Index == 5)
		cout<<endl;
	return 0;
}

int Recursive::linearSearch(int *arr, int len, int key, int index) {
	int flag = -1;
	if (index < len) {
		//cout<<"Element Not Found !"<<endl;
		if (arr[index] == key) {
			cout << "Element Found At Index : " << index << endl;
			return index;
		}
		flag = linearSearch(arr, len, key, index + 1);
	}
	return flag;
}

int Recursive::binarySearch(int *arr, int start, int end, int key) {
	int mid, flag = -1;
	if (end > 0 && start <= end) {
		mid = (start + end) / 2;
		if (arr[mid] == key) {
			cout << "Element Found At Index : " << mid << endl;
			return mid;
		} else if (key < arr[mid])
			flag = binarySearch(arr, start, mid - 1, key);
		else
			flag = binarySearch(arr, mid + 1, end, key);
	}
	if (flag == (-1) && start == end)
		cout << "Element Not Found" << endl;
	return flag;
}



Recursive::~Recursive() {
	// TODO Auto-generated destructor stub
}

