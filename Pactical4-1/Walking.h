#ifndef Walking_h
#define Walking_h



#include "State.h"


class Walking : public State
{
public:
	Walking();
	~Walking();
	void idle(Animation *a);
	void climbing(Animation *a);
	void jumping(Animation* a);
	void shoveling(Animation* a);
	void swordmanShip(Animation* a);
	void hammering(Animation* a);
};

#endif // !Jumping_h
