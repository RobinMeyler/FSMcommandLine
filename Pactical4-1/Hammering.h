#ifndef Hammering_h
#define Hammering_h



#include "State.h"
#include "Jumping.h"
#include "Climbing.h"
#include "Shoveling.h"
#include "SwordmanShip.h"
#include "idle.h"
#include "Walking.h"

class Hammering : public State
{
public:
	Hammering();
	~Hammering();
	void idle(Animation *a);
	void climbing(Animation *a);
	void walking(Animation* a);
	void shoveling(Animation* a);
	void swordmanShip(Animation* a);
	void jumping(Animation* a);
};

#endif // !Jumping_h
