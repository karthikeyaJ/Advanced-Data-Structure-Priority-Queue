#include <iostream>
#include "DoubleNode.h"

class DoubleLinkedList{
public:
	DoubleLinkedList();
	~DoubleLinkedList();
	DoubleNode * getHead();
	DoubleNode * getTail();
	void setHead(DoubleNode * head);
	void setTail(DoubleNode * tail);
	void addBack(IKeyValue * item);

private:
	int nodeData;
	DoubleNode * headNode;
	DoubleNode * tailNode;
	DoubleNode * currNode;

};
