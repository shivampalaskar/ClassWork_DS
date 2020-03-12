/*
 * Iterative.cpp
 *
 *  Created on: 12-Mar-2020
 *      Author: Shivam Palaskar
 */

#include <iostream>
#include <iomanip>
#include "Iterative.h"
using namespace std;

Iterative::Iterative() {
}

void Iterative::display(int *arr, int len) {
	cout << "Array Elements : ";
	for (int i = 0; i < len; i++)
		cout << left << setw(3) <<arr[i];
	cout << endl;
}

int Iterative::linearSearch(int *arr,int len,int key){
	bool flag=false;
	for(int i=0;i<len;i++){
		if(arr[i]==key){
			flag = true;
			cout<<"Element Found At Index : "<<i<<endl;
			return i;
		}
	}
	if(!flag){
		cout<<"Element Not Found"<<endl;
	}
	return -1;
}

int Iterative::binarySearch(int *arr,int len,int key){
	int flag = 0,mid,start = 0,end = len;
	while (end > 0 && start <= end ) {
		mid = (start + end) / 2;
		cout<<"Start : "<<start<<" End : "<<end<<" Mid : "<<mid<<endl;
		if (arr[mid] == key){
			flag = 1;
			break;
		}
		else if (key < arr[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	if( flag == 1){
		cout<<"Element Found At Index : "<<mid<<endl;
		return mid;
	}
	else{
		cout<<"Element Not Found"<<endl;
		return -1;
	}
}

Iterative::~Iterative() {
	// TODO Auto-generated destructor stub
}

