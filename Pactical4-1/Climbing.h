#ifndef Climbing_h
#define Climbing_h
#include "Animation.h"
#include "Idle.h"
#include <iostream>
class Climbing : public State
{
public:
	Climbing();
	~Climbing();
	void idle(Animation *a)
	{
		std::cout << "Going from Climbing to Idling" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};
#endif
