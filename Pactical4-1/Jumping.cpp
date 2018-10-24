#include "Jumping.h"


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

void Jumping::walking(Animation * a)
{
	std::cout << "Going from Jumping to walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void Jumping::shoveling(Animation * a)
{
	std::cout << "Going from Jumping to shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}
void Jumping::swordmanShip(Animation * a)
{
	std::cout << "Going from Jumping to swordmaship" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}
void Jumping::hammering(Animation * a)
{
	std::cout << "Going from Jumping to hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
