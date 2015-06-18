#include <iostream>
#include "DoubleList.h"

using namespace std;

DoubleLinkedList::DoubleLinkedList(){
	headNode = NULL;
	tailNode = NULL;
}

DoubleLinkedList :: ~DoubleLinkedList(){}

DoubleNode * DoubleLinkedList::getHead(){
	return headNode;
}

DoubleNode * DoubleLinkedList::getTail(){
	return tailNode;
}

void DoubleLinkedList::setHead(DoubleNode * head){
	headNode = head;
}

void DoubleLinkedList::setTail(DoubleNode * tail){
	tailNode = tail;
}

void DoubleLinkedList::addBack(IKeyValue * item)
{
	DoubleNode * currNode = new DoubleNode();
	currNode->setValue(item);
	
	DoubleNode* t1 = NULL;
	DoubleNode* t2 = NULL;

	if (headNode == NULL)
	{
		setHead(currNode);
		tailNode = currNode;
		return;
	}

	else if ((currNode->getValue()->getKey()) < (headNode->getValue()->getKey()))
	{
		currNode->setNext(headNode);
		headNode->setPrev(currNode);
		headNode = currNode;
		headNode->setPrev(NULL);
		tailNode->setNext(NULL);
	}

	else if ((currNode->getValue()->getKey()) > (tailNode->getValue()->getKey()))
	{

		currNode->setPrev(tailNode);
		tailNode->setNext(currNode);
		tailNode = currNode;
		tailNode->setNext(NULL);

	}
	else
	{
		t1 = headNode;
		while (t1 != NULL)
		{

			DoubleNode* t2 = (DoubleNode*)t1->getNext();
			if (t2 == NULL)
				break;
			if ((currNode->getValue()->getKey()) > (t1->getValue()->getKey()) && (currNode->getValue()->getKey()) < (t2->getValue()->getKey()))
			{

				currNode->setPrev(t1);
				t1->setNext(currNode);
				currNode->setNext(t2);
				t2->setPrev(currNode);
			}
			if (t1->getNext() != NULL)
				t1 = (DoubleNode*)t1->getNext();

		}
	}

}















































