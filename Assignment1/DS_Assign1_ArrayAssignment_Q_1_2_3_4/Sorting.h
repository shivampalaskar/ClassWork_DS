/*
 * Sorting.h
 *
 *  Created on: 12-Mar-2020
 *      Author: shiva
 */

#include "Array.h"
#ifndef SRC_SORTING_H_
#define SRC_SORTING_H_

class Sorting {
public:
	Sorting();
	void bubblesort(int*,int len);
	void selectionSort(int*,int,Array);
	//void swap(int&,int&);
	virtual ~Sorting();
};

#endif /* SRC_SORTING_H_ */
