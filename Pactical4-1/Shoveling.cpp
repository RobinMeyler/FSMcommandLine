#include "Shoveling.h"

Shoveling::Shoveling()
{
}

Shoveling::~Shoveling()
{
}

void Shoveling::idle(Animation * a)
{
	std::cout << "Going from Shoveling to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Shoveling::climbing(Animation * a)
{
	std::cout << "Going from Shoveling to climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Shoveling::walking(Animation * a)
{
	std::cout << "Going from Shoveling to walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void Shoveling::jumping(Animation * a)
{
	std::cout << "Going from Shoveling to jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Shoveling::swordmanShip(Animation * a)
{
	std::cout << "Going from Shoveling to swordmaship" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}
void Shoveling::hammering(Animation * a)
{
	std::cout << "Going from Shoveling to hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
