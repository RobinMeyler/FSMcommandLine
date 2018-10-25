#include "Climbing.h"

Climbing::Climbing()
{
}

Climbing::~Climbing()
{
}

void Climbing::idle(Animation * a)
{
	std::cout << "Stop Climbing, start Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Climbing::jumping(Animation * a)
{
	std::cout << "You jump from the wall" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Climbing::walking(Animation * a)
{
	std::cout << "You can't walk on walls, get off first" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Climbing::shoveling(Animation * a)
{
	std::cout << "You need your hands to climb, not shovel" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Climbing::swordmanShip(Animation * a)
{
	std::cout << "You need your hands to fight, no fight will be done here" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Climbing::hammering(Animation * a)
{
	std::cout << "You need your hands to climb, not hammer" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

