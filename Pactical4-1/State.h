#ifndef State_h
#define State_h

#include <iostream>
#include <SFML\Graphics.hpp>

#include "Animation.h"

class State
{
public:
	virtual void idle(Animation * a)
	{
		std::cout << "Idling" << std::endl;
	}
	virtual void jumping(Animation * a)
	{
		std::cout << "Jumping" << std::endl;
	}
	virtual void climbing(Animation * a)
	{
		std::cout << "Climbing" << std::endl;
	}
	virtual void hammering(Animation * a)
	{
		std::cout << "hammering" << std::endl;
	}
	virtual void swordmanShip(Animation * a)
	{
		std::cout << "Sword fighting" << std::endl;
	}
	virtual void shoveling(Animation * a)
	{
		std::cout << "shoveling" << std::endl;
	}
	virtual void walking(Animation * a)
	{
		std::cout << "walking" << std::endl;
	}
};
#include "Jumping.h"
#include "Climbing.h"
#include "idle.h"
#include "SwordmanShip.h"
#include "Hammering.h"
#include "Walking.h"
#include "shoveling.h"

#endif
