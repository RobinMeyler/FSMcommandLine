#ifndef Animation_h
#define Animation_h



class State;

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
	void walking();
	void hammering();
	void shoveling();
	void swordmanShip();
	

};

#endif // !Animation_h
#include "State.h"
