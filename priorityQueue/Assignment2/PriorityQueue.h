
#include "Interfaces02.h"
#include "DoubleList.h"
#include "Vector.h"
#include "VectorKeyValue.h"
#include "VectorString.h"

struct PriorityQueue:IPriorityQueue

{
private:
	IKeyValue * key_value=NULL;
	IPriorityQueue * input_queue=NULL;
	DoubleLinkedList * m_doubleLinkedList=NULL;
	DoubleLinkedList * k=NULL;
	DoubleLinkedList * j=NULL;
	IVectorString* duplicate=NULL;

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