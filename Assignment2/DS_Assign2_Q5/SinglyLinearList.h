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
	void getData(Node* newNode);
	Node* createNewNode();
	void addNodeAtLast(Node *newNode);
	void displayNode();
	bool isListEmpty();
	int getListLength();
	void deleteList();
	Node* getHead();
	void setHead(Node* head);
	void displayReverseList(Node *trav);
	void makeListReverse(Node *trav);
	void makeListReverseByGroup(Node *trav,int grpSize);
	int recursionTest(int i);
	~SinglyLinearList();
};
#endif /* SRC_SINGLYLINEARLIST_H_ */
