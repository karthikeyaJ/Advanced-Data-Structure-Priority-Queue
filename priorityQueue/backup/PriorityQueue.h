
#include "Interfaces02.h"
#include "DoubleList.h"
#include "Vector.h"
#include "VectorKeyValue.h"
#include "VectorString.h"

struct PriorityQueue:IPriorityQueue

{
private:
	IKeyValue * key_value;
	IPriorityQueue * input_queue;
	DoubleLinkedList * m_doubleLinkedList;
	DoubleLinkedList * k;
	DoubleLinkedList * j;
	IVectorString* duplicate;

	size_t m_priorityQueueSize;
public:
	PriorityQueue() :m_priorityQueueSize(0){
	 m_doubleLinkedList=new DoubleLinkedList();
	  k = new DoubleLinkedList();
	 j = new DoubleLinkedList();
	}
	~PriorityQueue() {}
	void enqueue(IKeyValue * key_value);
	void merge(IPriorityQueue * input_queue);
	IVectorKeyValue * returnSorted();
	int lowestKey();
	IVectorString * lowestValues();
	void dequeue();
	size_t size();
};