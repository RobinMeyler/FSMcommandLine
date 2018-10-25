#include "Hammering.h"

Hammering::Hammering()
{
}

Hammering::~Hammering()
{
}

void Hammering::idle(Animation * a)
{
	std::cout << "Stop hammering and start idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammering::climbing(Animation * a)
{
	std::cout << "Put the hammer away, swap to idle ready to climb" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammering::walking(Animation * a)
{
	std::cout << "Put the hammer away, swap to idle, ready to walk" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Hammering::shoveling(Animation * a)
{
	std::cout << "Put the hammer away, swap to idle, ready to Shovel" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Hammering::swordmanShip(Animation * a)
{
	std::cout << "Put the hammer away, swap to idle, ready to Fight" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Hammering::jumping(Animation * a)
{
	std::cout << "Put the hammer away, swap to idle, ready to jump" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
