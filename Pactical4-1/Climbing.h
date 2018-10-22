#ifndef Climbing_h
#define Climbing_h

#include "State.h"

#include <iostream>

class Climbing : public State
{
public:
	Climbing();
	~Climbing();
	void idle()
	{
		std::cout << "Going from Climbing to Idling" << std::endl;
		delete this;
	}
};

#endif