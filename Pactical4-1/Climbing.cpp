#include "Climbing.h"

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

void Climbing::walking(Animation * a)
{
	std::cout << "Going from Climbing to walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void Climbing::shoveling(Animation * a)
{
	std::cout << "Going from Climbing to shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}
void Climbing::swordmanShip(Animation * a)
{
	std::cout << "Going from Climbing to swordmaship" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}
void Climbing::hammering(Animation * a)
{
	std::cout << "Going from Climbing to hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

