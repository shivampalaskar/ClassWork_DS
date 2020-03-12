/*
 * Iterative.cpp
 *
 *  Created on: 12-Mar-2020
 *      Author: shiva
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

int Iterative::search(int *arr,int len,int key){
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
Iterative::~Iterative() {
	// TODO Auto-generated destructor stub
}

