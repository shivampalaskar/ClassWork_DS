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
	int getListLength(Node* &head);
	void deleteList();
	Node* getHead();
	void setHead(Node* head);
	void swapNode(Node* node1, Node* preToNode2);
	void bubblesort();
	~SinglyLinearList();
};
#endif /* SRC_SINGLYLINEARLIST_H_ */
