#include <iostream>
#include "DoubleNode.h"
using namespace std;

DoubleNode::DoubleNode(){
	prevNode = NULL;
	nextNode = NULL;
}
DoubleNode :: ~DoubleNode(){}

void DoubleNode::setValue(IKeyValue * item){
	this->item = item;
}

IKeyValue * DoubleNode::getValue(){
	return 	this->item;
}

DoubleNode * DoubleNode::getPrev(){
	return prevNode;
}

DoubleNode * DoubleNode::getNext(){
	return nextNode;
}

void DoubleNode::setPrev(DoubleNode * prev){
	prevNode = prev;
}

void DoubleNode::setNext(DoubleNode * next){
	nextNode = next;
}