#ifndef Idle_h
#define idle_h
#include "Animation.h"
class Idle : public State
{
public:
	Idle();
	~Idle();
	void jumping(Animation* a);
	void climbing(Animation* a);
};
#endif
