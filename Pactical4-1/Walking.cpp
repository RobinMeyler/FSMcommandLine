#include "Walking.h"

Walking::Walking()
{
}

Walking::~Walking()
{
}

void Walking::idle(Animation * a)
{
	std::cout << "Going from Walking to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Walking::climbing(Animation * a)
{
	std::cout << "Going from Walking to climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Walking::swordmanShip(Animation * a)
{
	std::cout << "Going from Walking to swordmanShip" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}
void Walking::jumping(Animation * a)
{
	std::cout << "Going from Walking to shoveling" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Walking::shoveling(Animation * a)
{
	std::cout << "Going from Walking to swordmaship" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}
void Walking::hammering(Animation * a)
{
	std::cout << "Going from Walking to hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

