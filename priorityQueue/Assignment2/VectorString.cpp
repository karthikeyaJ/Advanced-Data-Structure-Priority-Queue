
#include "Interfaces02.h"
#include "VectorString.h"
#include "Vector.h"

void VectorString::push_back(std::string item)
{
	dvector.push_back(item);
}

void VectorString::pop_back()
{
	dvector.pop_back();
}

std::string VectorString::get(int index)
{
	return dvector.get(index);
}

void VectorString::set(int index, std::string item)
{
	dvector[index] = item;
}

size_t VectorString::size()
{
  return  dvector.m_size();
}
