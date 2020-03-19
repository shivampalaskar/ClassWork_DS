#include "Node.h"
#ifndef SRC_SINGLYLINEARLIST_H_
#define SRC_SINGLYLINEARLIST_H_

class SinglyLinearList {
private:
	Node *head;
public:
	SinglyLinearList();
	Node* getLastNode();
	Node* getLastNode_EffectiveMethod();
	Node* createNewNode();
	void getData(Node* newNode);
	void addNodeAtLast(Node *newNode);
	void displayNode();
	bool isListEmpty();
	int getListLength();
	void deleteList();
	Node* getHead();
	void setHead(Node* head);
	bool deleteEmployeeByID(int empID);
	bool searchEmployeeByID(int empID);
	Node* search(int key,Node **prev);
	bool search_and_delete(int key);
	void displayReverseList(Node *trav);
	void makeListReverse(Node *trav);
	void makeListReverseByGroup(Node *trav,int grpSize);
	int recursionTest(int i);
	~SinglyLinearList();
};
#endif /* SRC_SINGLYLINEARLIST_H_ */
