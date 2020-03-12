/*
 * Sorting.cpp
 *
 *  Created on: 12-Mar-2020
 *      Author: shiva
 */

#include <iostream>
#include <iomanip>
#include "Sorting.h"
using namespace std;

Sorting::Sorting() {
	// TODO Auto-generated constructor stub
}

void Sorting::swap(int& arr,int&arr1){
	int temp = arr;
	arr = arr1;
	arr1= temp;
}

void Sorting::sort(int *arr,int len){
	for(int i=0;i<len;i++){
		for(int j=0;j<len -1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				/*for(int i=0;i<len;i++)
					cout<<setw(3)<<left<<arr[i];
				cout<<endl;*/
			}
		}
	}
}


Sorting::~Sorting() {
	// TODO Auto-generated destructor stub
}

