/*
 * Array.cpp
 *
 *  Created on: 12-Mar-2020
 *      Author: shiva
 */
#include<iostream>
#include <iomanip>
#include "Array.h"
using namespace std;

Array::Array() {
	this->len = 10;
	int temp=9;
	this->arr = new int[len];
	for (int i = 0; i < this->len; i++)
		arr[i] = temp--;
}

Array::Array(int len) {
	this->len = len;
	this->arr = new int[len];
}

void Array::insertElement() {
	cout << "Enter Elements : "<<endl;
	for (int i = 0; i < this->len; i++){
		cout<<"a["<<i<<"] : ";
		cin >> this->arr[i];
	}
}
void Array::displayElements() {
	cout << "Array Elements : ";
	for (int i = 0; i < this->len; i++)
		cout << left << setw(6) << this->arr[i];
	cout<<endl;
}

int* Array::getArr() {
	return arr;
}

void Array::setArr(int* arr) {
	this->arr = arr;
}

int Array::getLen() {
	return len;
}

void Array::setLen(int len) {
	this->len = len;
}

Array::~Array() {
	delete[] arr;
}

