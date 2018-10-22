#include "Jumping.h"
#include "Idle.h"
#include "Climbing.h"


Jumping::Jumping()
{
}

Jumping::~Jumping()
{
}

void Jumping::idle(Animation * a)
{
	std::cout << "Going from Jumping to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::climbing(Animation * a)
{
	std::cout << "Going from Jumping to climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
