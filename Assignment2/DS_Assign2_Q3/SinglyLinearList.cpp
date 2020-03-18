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

int SinglyLinearList::getListLength() {
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

Node* SinglyLinearList::getMiddleNode(){
	int len = getListLength();
	Node *trav = head;
	if(len ==0)
		return trav;

	for(int i=0;i < (len/2);i++){
		trav = trav->nextNode;
	}
	return trav;
}

void SinglyLinearList::displayMiddleNode(){
	Node *middleNode = getMiddleNode();
	if(middleNode == NULL)
		cout<<"Empty List"<<endl;
	else
		cout<<"Middle Node Value : "<<middleNode->num<<endl;
	return;
}

SinglyLinearList::~SinglyLinearList() {
	delete head;
}
