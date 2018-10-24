#ifndef Climbing_h
#define Climbing_h

#include "State.h"
#include "Jumping.h"
#include "idle.h"
#include "Shoveling.h"
#include "SwordmanShip.h"
#include "Hammering.h"
#include "Walking.h"


#include <iostream>

class Climbing : public State
{
public:
	Climbing();
	~Climbing();
	void idle(Animation *a);
	void jumping(Animation *a);
	void walking(Animation* a);
	void shoveling(Animation* a);
	void swordmanShip(Animation* a);
	void hammering(Animation* a);
	
};

#endif