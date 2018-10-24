#ifndef SwordmanShip_h
#define SwordmanShip_h



#include "State.h"
#include "Jumping.h"
#include "Climbing.h"
#include "Shoveling.h"
#include "idle.h"
#include "Hammering.h"
#include "Walking.h"

class SwordmanShip : public State
{
public:
	SwordmanShip();
	~SwordmanShip();
	void idle(Animation *a);
	void climbing(Animation *a);
	void shoveling(Animation* a);
	void jumping(Animation* a);
	void walking(Animation* a);
	void hammering(Animation* a);
};

#endif // !Jumping_h

