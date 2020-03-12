/*
 * Recursive.cpp
 *
 *  Created on: 12-Mar-2020
 *      Author: shiva
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

int Recursive::search(int *arr,int len,int key,int index){
	if(index>=len){
		cout<<"Element Not Found !"<<endl;
		return -1;
	}
	if (arr[index] == key) {
		cout << "Element Found At Index : " << index << endl;
		return index;
	}
	search(arr,len,key,index+1);
}

Recursive::~Recursive() {
	// TODO Auto-generated destructor stub
}

