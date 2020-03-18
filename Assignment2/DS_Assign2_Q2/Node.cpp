#include <iostream>
#include "Node.h"

Node::Node() {
	this->num=0;
	this->nextNode=NULL;
}

Node::Node(int num) {
	this->num=num;
	this->nextNode=NULL;
}

int Node::getNum() {
	return this->num;
}

void Node::setNum(int num) {
	this->num = num;
}

Node* Node::getNextNode(){
	return this->nextNode;
}
void Node::setNextNode(Node* nextNode) {
	this->nextNode=nextNode;
}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

