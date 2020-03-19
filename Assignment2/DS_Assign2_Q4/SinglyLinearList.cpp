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

void SinglyLinearList::deleteDuplicate_Recursive(Node *trav){
	if(trav == NULL){
		cout<<"Empty List : "<<endl;
		return;
	}
	if(trav == head && trav->nextNode == NULL){
		//cout<<"Only 1 Element Is Present in List"<<endl;
		return;
	}
	if(trav->nextNode == NULL){
		return;
	}
	if(trav->num == trav->nextNode->num){
		trav->nextNode = trav->nextNode->nextNode;
		deleteDuplicate_Recursive(trav);
	}else
		deleteDuplicate_Recursive(trav->nextNode);
	return;
}

void SinglyLinearList::deleteDuplicate_NonRecursive(){
	Node *trav = head;
	while(trav != NULL){
		if(trav->nextNode == NULL){
			//cout<<"Only 1 Element Is Present"<<endl;
			break;
		}
		if(trav->num == trav->nextNode->num){
			trav->nextNode = trav->nextNode->nextNode;
		}else
			trav = trav->nextNode;
	}
}

SinglyLinearList::~SinglyLinearList() {
	delete head;
}
