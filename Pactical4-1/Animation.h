#ifndef Animation_h
#define Animation_h

class State;
#include "Idle.h"
#include "Jumping.h"
#include "Climbing.h"

class Animation
{
public:
	class State *current;
public:
	Animation();
	~Animation();
	void setCurrent(State *s)
	{
		current = s;
	}
	void idle();
	void jumping();
	void climbing();
};

#endif
#include "State.h"
