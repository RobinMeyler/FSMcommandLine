#ifndef Idle_h
#define Idle_h



#include "State.h"


class Idle : public State
{
public:
	Idle();
	~Idle();
	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void shoveling(Animation* a);
	void swordmanShip(Animation* a);
	void hammering(Animation* a);
};

#endif