#include "Factory02.h"
#include "PriorityQueue.h"
#include "KeyValue.h"
Factory02::Factory02()
{
}

Factory02::~Factory02()
{
}
 
void * Factory02::create(std::string name)
{
  if(name == "IKeyValue1"){
	  return new KeyValue();
  } else if(name == "IKeyValue2"){
	  return new KeyValue();
  } else if(name == "IKeyValue3"){
	  return new KeyValue();
  } else if(name == "IKeyValue4"){
	  return new KeyValue();
  } else if(name == "IPriorityQueue1"){
    return new PriorityQueue();
  } else if(name == "IPriorityQueue2"){
	  return new PriorityQueue();
  } else if(name == "IPriorityQueue3"){
	  return new PriorityQueue();
  } else if(name == "IPriorityQueue4"){
	  return new PriorityQueue();
  } else {
	  return new PriorityQueue();
  }
}

extern "C" {

ObjectFactory * createObjectFactory(){
  return new Factory02();  
}

}
