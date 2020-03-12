/*
 * Sorting.cpp
 *
 *  Created on: 12-Mar-2020
 *      Author: shiva
 */

#include <iostream>
#include <iomanip>
#include "Sorting.h"
//#include "Array.h"
using namespace std;

Sorting::Sorting() {
	// TODO Auto-generated constructor stub
}

void Sorting::swap(int &arr,int&arr1){
	int temp = arr;
	arr = arr1;
	arr1= temp;
}

void Sorting::bubblesort(int *arr,int len){
	for(int i=0;i<len;i++){
		for(int j=0;j<len -1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	cout<<"Sorting Done !"<<endl;
}

int smallElementIndex(int *arr,int start,int len){
	int minValue = arr[start];
	int minIndex = start;
	for(int i=minIndex+1;i<len;i++){
		if(arr[i]<minValue){
			minValue = arr[i];
			minIndex = i;
		}
	}
	return minIndex;
}

void Sorting::selectionSort(int *arr,int len,Array array){
	for(int i=0;i<len;i++){
		int minIndex = smallElementIndex(arr,i,len);
		swap(arr[i],arr[minIndex]);
	}
	cout<<"Sorting Done !"<<endl;
}

Sorting::~Sorting() {
	// TODO Auto-generated destructor stub
}

