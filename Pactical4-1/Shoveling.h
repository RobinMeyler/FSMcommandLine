#ifndef Shoveling_h
#define Shoveling_h



#include "State.h"


class Shoveling : public State
{
public:
	Shoveling();
	~Shoveling();
	void idle(Animation *a);
	void climbing(Animation *a);
	void walking(Animation* a);
	void jumping(Animation* a);
	void swordmanShip(Animation* a);
	void hammering(Animation* a);
};

#endif // !Jumping_h
