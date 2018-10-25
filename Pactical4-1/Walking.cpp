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
	std::cout << "Swap to Idle, ready to climb" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Walking::swordmanShip(Animation * a)
{
	std::cout << "Start attacking with your sword" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}
void Walking::jumping(Animation * a)
{
	std::cout << "Jump while moving for extra distance" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Walking::shoveling(Animation * a)
{
	std::cout << "Swap to Idle, ready to shovel" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Walking::hammering(Animation * a)
{
	std::cout << "Swap to Idle, ready to Hammer" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

