#include <iostream>
#include <string>
#include <cstring>
#ifndef SRC_NODE_H_
#define SRC_NODE_H_
class SinglyLinearList;
class Node {
private :
	int empID;
	char name[20];
	char addr[20];
	Node *nextNode;
public:
	Node();
	Node(int num,char *name,char *addr);
	~Node();
	char* getAddr();
	int getEmpId();
	void setEmpId(int empId);
	char* getName();
	Node* getNextNode();
	void setNextNode(Node* nextNode);
	friend SinglyLinearList;
};

#endif /* SRC_NODE_H_ */
