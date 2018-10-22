#ifndef State_h
#define State_h

#include <iostream>
#include <SFML\Graphics.hpp>

#include "Animation.h"

class State
{
public:
	virtual void idle(Animation * a)
	{
		std::cout << "Idling" << std::endl;
	}
	virtual void jumping(Animation * a)
	{
		std::cout << "Jumping" << std::endl;
	}
	virtual void climbing(Animation * a)
	{
		std::cout << "Climbing" << std::endl;
	}
};


#endif
