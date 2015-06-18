#pragma once

#include "Interfaces02.h"
#include "Vector.h"

class VectorString :public IVectorString
{
private:

	std::string item;
    Vector<std::string> dvector;
	int index;
	size_t _size;

public:
	VectorString() {}
	~VectorString() {}
	void push_back(std::string item);
	void pop_back();
	std::string get(int index);
	void set(int index, std::string item);
	size_t size();
};