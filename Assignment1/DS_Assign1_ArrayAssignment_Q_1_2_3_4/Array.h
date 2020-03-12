/*
 * Array.h
 *
 *  Created on: 12-Mar-2020
 *      Author: shiva
 */

#ifndef SRC_ARRAY_H_
#define SRC_ARRAY_H_

class Array {
private:
	int len;
	int *arr;
public:
	Array();
	Array(int);
	void insertElement();
	void displayElements();
	virtual ~Array();
	int* getArr();
	void setArr(int* arr);
	int getLen();
	void setLen(int len);
};

#endif /* SRC_ARRAY_H_ */
