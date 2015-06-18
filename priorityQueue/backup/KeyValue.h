#pragma once

#include "Interfaces02.h"
#include "VectorString.h"


class KeyValue: public IKeyValue

{
private:
	int key;
	VectorString* _value;

public:
	KeyValue() { _value = new VectorString(); }
    ~KeyValue() {}
	void setKey(int key);
	IVectorString* getString();
	void setValue(std::string value);
	int getKey();
	std::string getValue();
};