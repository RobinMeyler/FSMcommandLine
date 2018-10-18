#ifndef Jumping_h
#define Jumping_h

#include "Animation.h"

class Jumping : public State
{
public:
	Jumping();
	~Jumping();
	void idle(Animation *a);
};
#endif

