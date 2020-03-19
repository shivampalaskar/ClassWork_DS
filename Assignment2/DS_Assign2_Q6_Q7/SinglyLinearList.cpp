#include <iostream>
#include <iomanip>
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
	cout<<"Enter Employee Id : ";
	cin>>newNode->empID;
	cout<<"Enter Employee Name : ";
	cin>>newNode->name;
	cout<<"Enter Employee Address : ";
	cin>>newNode->addr;
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
	if(head == NULL){
		cout<<"Empty List"<<endl;
		return;
	}
	Node *trav = head;
	while (trav != NULL) {
		cout<<left<<setw(10)<< trav->empID;
		cout<<left<<setw(15)<< trav->name;
		cout<<left<<setw(15)<<trav->addr;
		cout << endl;
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

bool SinglyLinearList::deleteEmployeeByID(int empID){
	Node *trav = head;
	Node *preNode = head;
	bool flag = false;
	while(trav != NULL){
		if(trav->empID == empID){
			if(trav == head){
				head = trav->nextNode;
				flag = true;
				break;
			}
			preNode->nextNode = trav->nextNode;
			flag = true;
			break;
		}
		preNode = trav;
		trav = trav->nextNode;
	}
	return flag;
}

bool SinglyLinearList::searchEmployeeByID(int empID) {
	Node *trav = head;
	bool flag = false;
	while (trav != NULL) {
		if (trav->empID == empID) {
			cout << left << setw(10) << trav->empID;
			cout << left << setw(15) << trav->name;
			cout << left << setw(15) << trav->addr;
			cout << endl;
			flag = true;
			break;
		}
		trav = trav->nextNode;
	}
	return flag;
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
	cout << left << setw(10) << trav->empID;
	cout << left << setw(15) << trav->name;
	cout << left << setw(15) << trav->addr;
	cout<<endl;
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

void SinglyLinearList::makeListReverseByGroup(Node *trav,int grpSize){
	int listLength = this->getListLength();
	if(grpSize > listLength && grpSize < 0){
		cout<<"Invalid Group Size !"<<endl;
		return;
	}else{
		while(trav != NULL)
		for(int i =0;i<grpSize;i++){

		}
	}
}

int SinglyLinearList::recursionTest(int i) {
	int j = 0;
	if (i > 0)
		j = recursionTest(i - 1);
	cout << " i : " << i << endl;
	cout << " j : " << j << endl;
	return i;
}

SinglyLinearList::~SinglyLinearList() {
	delete head;
}
