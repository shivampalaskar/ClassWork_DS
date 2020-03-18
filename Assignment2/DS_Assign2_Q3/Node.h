#ifndef SRC_NODE_H_
#define SRC_NODE_H_
class SinglyLinearList;
class Node {
private :
	int num;
	Node *nextNode;
public:
	Node();
	Node(int num);
	int getNum();
	void setNum(int num);
	Node* getNextNode();
	void setNextNode(Node*);
	~Node();
	friend SinglyLinearList;
};

#endif /* SRC_NODE_H_ */
