#include <iostream>
#include "Node.h"
#include <string>
#include <cstring>


Node::Node() {
	this->empID=0;
	strcpy(this->name,"");
	strcpy(this->addr,"");
	this->nextNode=NULL;
}

Node::Node(int num,char *name,char *addr) {
	this->empID=num;
	strcpy(this->name,name);
	strcpy(this->addr,addr);
	this->nextNode=NULL;
}

char* Node::getAddr(){
	return addr;
}

int Node::getEmpId(){
	return empID;
}

void Node::setEmpId(int empId) {
	empID = empId;
}

char* Node::getName() {
	return name;
}

Node* Node::getNextNode() {
	return nextNode;
}

void Node::setNextNode(Node* nextNode) {
	this->nextNode = nextNode;
}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

