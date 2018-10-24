#include "Hammering.h"

Hammering::Hammering()
{
}

Hammering::~Hammering()
{
}

void Hammering::idle(Animation * a)
{
	std::cout << "Going from Hammering to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammering::climbing(Animation * a)
{
	std::cout << "Going from Hammering to climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Hammering::walking(Animation * a)
{
	std::cout << "Going from Hammering to walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void Hammering::shoveling(Animation * a)
{
	std::cout << "Going from Hammering to shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}
void Hammering::swordmanShip(Animation * a)
{
	std::cout << "Going from Hammering to swordmaship" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}
void Hammering::jumping(Animation * a)
{
	std::cout << "Going from Hammering to jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
