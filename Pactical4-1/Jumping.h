#ifndef Jumping_h
#define Jumping_h



#include "State.h"

class Jumping : public State
{
public:
	Jumping();
	~Jumping();
	void idle(Animation *a);
	void climbing(Animation *a);
	void walking(Animation* a);
	void shoveling(Animation* a);
	void swordmanShip(Animation* a);
	void hammering(Animation* a);
};

#endif // !Jumping_h
