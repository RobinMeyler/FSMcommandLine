#ifndef State_h
#define State_h

#include <iostream>


#include "Animation.h"

class State
{
public:
	virtual void idle(Animation * a)
	{
		std::cout << "State::Idling" << std::endl;
	}
	virtual void jumping(Animation * a)
	{
		std::cout << "State::Jumping" << std::endl;
	}
	virtual void climbing(Animation * a)
	{
		std::cout << "State::Climbing" << std::endl;
	}



};


#endif
