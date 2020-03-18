#include <iostream>
#include "SinglyLinearList.h"
using namespace std;

SinglyLinearList::SinglyLinearList() {
	this->head = NULL;
}

Node* SinglyLinearList::getLastNode() {
	Node *trav = head;
	Node *lastNode;
	while (trav != NULL) {
		lastNode = trav;
		trav = trav->nextNode;
	}
	return lastNode;
}

Node* SinglyLinearList::getLastNode_EffectiveMethod() {
	Node *trav = head;
	while (trav->nextNode != NULL) {
		trav = trav->nextNode;
	}
	return trav;
}

void SinglyLinearList::getData(Node* newNode) {
	int tempNum;
	cout << "Enter Number  : ";
	cin >> tempNum;
	newNode->num = tempNum;
}

Node* SinglyLinearList::createNewNode() {
	Node *newNode = new Node;
	getData(newNode);
	return newNode;
}

void SinglyLinearList::addNodeAtLast(Node *newNode) {
	if (head == NULL)
		head = newNode;
	else {
		Node *lastNode = getLastNode_EffectiveMethod();
		lastNode->nextNode = newNode;
	}
}

void SinglyLinearList::addNodeBySortedManner(Node* newNode) {
	if (head == NULL)
		head = newNode;
	else {
		Node *trav = head;
		while (trav != NULL) {
			if ((trav == head) && (trav->nextNode != NULL)) {
				//cout<<"Head Node"<<endl;
				if (newNode->num < trav->num) {
					head = newNode;
					newNode->nextNode = trav;
					break;
				} else if (newNode->num < trav->nextNode->num) {
					newNode->nextNode = trav->nextNode;
					trav->nextNode = newNode;
					break;
				}
			} else if ((trav->nextNode == NULL)) {
				//cout<<"Last Node"<<endl;
				if (newNode->num < trav->num) {
					head = newNode;
					newNode->nextNode = trav;
					trav->nextNode = NULL;
					break;
				} else{
					addNodeAtLast(newNode);
					break;
				}
			} else if (newNode->num < trav->nextNode->num) {
				//cout<<"Middle Node"<<endl;
				newNode->nextNode = trav->nextNode;
				trav->nextNode = newNode;
				break;
			}
			trav = trav->nextNode;
		}
	}
}

void SinglyLinearList::displayNode() {
	Node *trav = head;
	while (trav != NULL) {
		cout << trav->num << " ";
		trav = trav->nextNode;
	}
	cout << endl;
}

bool SinglyLinearList::isListEmpty() {
	if (head == NULL)
		return true;
	else
		return false;
}

int SinglyLinearList::getListLength(Node* &head) {
	Node *trav = head;
	int len = 0;
	while (trav != NULL) {
		len++;
		trav = trav->nextNode;
	}
	return len;
}

Node* SinglyLinearList::getHead() {
	return this->head;
}

void SinglyLinearList::setHead(Node* head) {
	this->head = head;
}

void SinglyLinearList::deleteList() {
	this->head = NULL;
}

void SinglyLinearList::swapNode(Node* preToNode1, Node* preToNode2) {
	if (preToNode1 == NULL) {
		cout << "List is Empty Not Possible to Swap" << endl;
		return;
	}
	if (preToNode1->nextNode == NULL) {
		cout << "Only 1 Node is Present Not Possible to Swap" << endl;
		return;
	}
	Node* node1 = NULL;
	if (preToNode2 != head) {
		node1 = preToNode1->getNextNode();
	}
	Node* node2 = preToNode2->getNextNode();
	Node* nextToNode1 = preToNode1->getNextNode();
	Node* nextToNode2 = node2->getNextNode();

	// When one node is First Node
	if (preToNode2 == head) {
		if (preToNode1->getNextNode() == node2) {
			//cout << "A d j a c e n t" << endl;
			this->head = node2;
			node2->setNextNode(preToNode1);
			preToNode1->setNextNode(nextToNode2);
		} else {
			//Head and First Node Setting
			head = node2;
			node2->setNextNode(nextToNode1);

			//Other Node Setting
			if (nextToNode2 != NULL) {
				preToNode1->setNextNode(nextToNode2);
			} else
				preToNode1->setNextNode(NULL);

			preToNode2->setNextNode(preToNode1);
		}
	} else {
		// When Both Node are in between the list
		//cout << "N o n - A d j a c e n t" << endl;
		preToNode1->nextNode = node2;
		node2->nextNode = node1;
		node1->nextNode = nextToNode2;
	}
}

void SinglyLinearList::bubbleSort_ByNode() {
	SinglyLinearList list;
	int len = list.getListLength(this->head);
	if (len == 0) {
		cout << "List Is Empty " << endl;
		return;
	}
	if (len == 1) {
		cout << "Only 1 Element Is Present No Need To Sort" << endl;
		return;
	}
	Node* node1 = head;
	Node* node2 = head;
	bool isSortingDone;
	for (int i = 0; i < len - 1; i++) {
		isSortingDone = true;
		for (int j = 0; j < len - 1 - i; j++) {
			if (j == 0) {
				if (node1->getNum() > node2->getNextNode()->getNum()) {
					//cout << "Adjacent " << endl;
					swapNode(node1, node2);
					//displayNode();
					isSortingDone = false;
				}
				node1 = head;
				node2 = head;
				node2 = node2->getNextNode();
			} else {
				if (node1->getNextNode()->getNum()
						> node2->getNextNode()->getNum()) {
					//cout << "Non Adjacent" << endl;
					swapNode(node1, node2);
					//displayNode();
					isSortingDone = false;
				}
				node1 = head;
				node2 = head;
				for (int k = 0; k <= j; k++) {
					if (k != j)
						node1 = node1->getNextNode();
					node2 = node2->getNextNode();
				}
			}
		}
		if (isSortingDone) {
			cout << "Sorting Done !" << endl;
			break;
		}
		node1 = head;
		node2 = head;
	}
}

Node* SinglyLinearList::smallElementNode(Node *node1) {
	Node *trav = node1;
	Node* preToMinvalueNode = node1;
	int minValue = node1->getNum();
	while (trav != NULL) {
		if (trav->num < minValue) {
			minValue = trav->num;
			preToMinvalueNode = trav;
		}
		trav = trav->nextNode;
	}
	return preToMinvalueNode;
}

void SinglyLinearList::swapByElement(Node *node1, Node *minValueNode) {
	int tempVar;
	tempVar = node1->num;
	node1->num = minValueNode->num;
	minValueNode->num = tempVar;
}

void SinglyLinearList::selectionSort_ByValue() {
	SinglyLinearList list;
	int len = list.getListLength(this->head);
	if (len == 0) {
		cout << "List Is Empty " << endl;
		return;
	}
	if (len == 1) {
		cout << "Only 1 Element Is Present No Need To Sort" << endl;
		return;
	}
	Node* node1 = head;
	Node *minValueNode;
	while (node1->nextNode != NULL) {
		minValueNode = smallElementNode(node1);
		if (minValueNode != node1) // To ignore self swapping
			swapByElement(node1, minValueNode);
		node1 = node1->nextNode;
	}
	cout << "Sorting Done !" << endl;
}

SinglyLinearList::~SinglyLinearList() {
	delete head;
}
