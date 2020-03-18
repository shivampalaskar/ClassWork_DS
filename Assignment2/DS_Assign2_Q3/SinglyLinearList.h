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
	void displayMiddleNode();
	Node* getMiddleNode();
	~SinglyLinearList();
};
#endif /* SRC_SINGLYLINEARLIST_H_ */
