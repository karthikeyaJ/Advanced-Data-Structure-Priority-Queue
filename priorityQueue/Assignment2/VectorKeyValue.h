#ifndef VECTORKEYVALUE_H
#define VECTORKEYVALUE_H

#include "Interfaces02.h"
#include "Vector.h"

struct VectorKeyValue:IVectorKeyValue 
{
private:
	int index;
	Vector<IKeyValue*> cvector;
	size_t _size;


public:
VectorKeyValue() {}
~VectorKeyValue() {}
void push_back(IKeyValue * item);
void pop_back();
 IKeyValue * get(int index);
void set(int index, IKeyValue * item);
size_t size();
};

#endif