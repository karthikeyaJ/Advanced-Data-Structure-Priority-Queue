#include "Interfaces02.h"

using namespace std;


class DoubleNode
{
public:
	DoubleNode();
	~DoubleNode();
	void setValue(IKeyValue * item);
	IKeyValue * getValue();
	DoubleNode * getPrev();
	DoubleNode * getNext();
	void setPrev(DoubleNode * prev);
	void setNext(DoubleNode * next);

private:
	IKeyValue * item = NULL;
	DoubleNode * nextNode=NULL;
	DoubleNode * prevNode=NULL;

};