/*
 * Recursive.h
 *
 *  Created on: 12-Mar-2020
 *      Author: Shivam Palaskar
 */

#ifndef SRC_RECURSIVE_H_
#define SRC_RECURSIVE_H_

class Recursive {
public:
	Recursive();
	int display(int*,int,int);
	int linearSearch(int*,int,int,int);
	int binarySearch(int*,int,int,int);
	virtual ~Recursive();
};

#endif /* SRC_RECURSIVE_H_ */
