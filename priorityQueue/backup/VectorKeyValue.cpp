
#include "Interfaces02.h"
#include "VectorKeyValue.h"
#include "Vector.h"

void VectorKeyValue::push_back(IKeyValue * item)
{
	cvector.push_back(item);
}
	
void VectorKeyValue::pop_back()
{
	cvector.pop_back();
}

IKeyValue * VectorKeyValue::get(int index)
{
	return cvector.get(index);
}

void VectorKeyValue::set(int index, IKeyValue * item)
{
	cvector[index] = item;
}
	

size_t VectorKeyValue::size()
{
  return cvector.m_size();
}
