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

void SinglyLinearList::displayReverseList(Node *trav) {
	if (trav == NULL) {
		cout << "Empty List" << endl;
		return;
	}
	if (trav->nextNode != NULL) {
		displayReverseList(trav->nextNode);
	}
	cout << trav->num << " ";
	return;
}

void SinglyLinearList::makeListReverse(Node *trav) {
	if (trav == NULL) {
		cout << "Empty List" << endl;
		return;
	}
	if (trav->nextNode == NULL) {
		head = trav;
		return;
	}
	makeListReverse(trav->nextNode);
	trav->nextNode->nextNode = trav;
	trav->nextNode = NULL;
	return;
}

int SinglyLinearList::recursionTest(int i) {
	int j = 0;
	if (i > 0)
		j = test(i - 1);
	cout << " i : " << i << endl;
	cout << " j : " << j << endl;
	return i;
}

SinglyLinearList::~SinglyLinearList() {
	delete head;
}
