#include "Interfaces02.h"
#include "KeyValue.h"


void KeyValue::setKey(int key)
{
	this->key = key;
}

void KeyValue::setValue(std::string value)
{
	_value->push_back(value);
}

int KeyValue::getKey()
{
	return(this->key);
}

IVectorString* KeyValue:: getString(){
	return _value;
}


std::string KeyValue::getValue()
{
	return _value->get(0);
}
