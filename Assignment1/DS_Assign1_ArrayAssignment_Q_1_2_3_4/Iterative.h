/*
 * Iterative.h
 *
 *  Created on: 12-Mar-2020
 *      Author: Shivam Palaskar
 */

#ifndef SRC_ITERATIVE_H_
#define SRC_ITERATIVE_H_

class Iterative {
public:
	Iterative();
	void display(int*,int);
	int linearSearch(int*,int,int);
	int binarySearch(int*,int,int);
	virtual ~Iterative();
};

#endif /* SRC_ITERATIVE_H_ */
