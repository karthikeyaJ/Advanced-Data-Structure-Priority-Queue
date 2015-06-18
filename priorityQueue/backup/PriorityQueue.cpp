#include "Interfaces02.h"
#include "PriorityQueue.h"
#include "KeyValue.h"


void PriorityQueue::enqueue(IKeyValue * key_value)
{

	k = m_doubleLinkedList;
	int found = 0;
	DoubleNode* curr = k->getHead();
	while (curr != NULL)
	{

		if (curr->getValue()->getKey() == key_value->getKey())
		{
			found = 1;
			curr->getValue()->setValue(key_value->getValue());
		}
		curr = curr->getNext();
	}
	if (found == 0)
	{
		m_doubleLinkedList->addBack(key_value);
		++m_priorityQueueSize;
	}

}

void PriorityQueue::merge(IPriorityQueue * input_queue)
{
	IKeyValue *v = new KeyValue();
	int m=input_queue->lowestKey();
	IVectorString *kkk = (VectorString*) (input_queue->lowestValues());
	v->setValue(kkk->get(0)) ;
	v->setKey(m); 


	IVectorKeyValue * tempVector = new VectorKeyValue();
	tempVector = input_queue->returnSorted();
	for (int i = 0; i < input_queue->size(); i++)
	{
		enqueue(tempVector->get(i));
	}


}


IVectorKeyValue * PriorityQueue::returnSorted()
{
	
	IVectorKeyValue *_vkey = new VectorKeyValue();
	j = m_doubleLinkedList;
	DoubleNode *curr = j->getHead();

	while (curr != NULL)
	{
		KeyValue *x = (KeyValue*)curr->getValue();
		IVectorString *k = x->getString();

		for (int i = 0; i < k->size(); i++)
		{
			IKeyValue* m = new KeyValue();
			m->setKey(x->getKey());
			m->setValue(k->get(i));

			_vkey->push_back(m);

		}
		curr = curr->getNext();
	}
	return _vkey;

	}



int PriorityQueue::lowestKey()
{	
	return m_doubleLinkedList->getHead()->getValue()->getKey();
}

IVectorString * PriorityQueue::lowestValues()
{
	IKeyValue* derivedpointer = k->getHead()->getValue();

	return static_cast<KeyValue*>(derivedpointer)->getString();   //m_doubleLinkedList->getHead()->getValue()->getString();

}



void PriorityQueue::dequeue()
{
	m_doubleLinkedList->setHead(m_doubleLinkedList->getHead()->getNext());
	--m_priorityQueueSize;
}

size_t PriorityQueue::size()
{
	return m_priorityQueueSize;
}
