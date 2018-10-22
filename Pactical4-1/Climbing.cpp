#include "Climbing.h"
#include "Idle.h"
#include "Jumping.h"


Climbing::Climbing()
{
}


Climbing::~Climbing()
{
}

void Climbing::idle(Animation * a)
{
	std::cout << "Going from Climbing to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Climbing::jumping(Animation * a)
{
	std::cout << "Going from Climbing to jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
