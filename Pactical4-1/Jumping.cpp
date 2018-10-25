#include "Jumping.h"


Jumping::Jumping()
{
}

Jumping::~Jumping()
{
}

void Jumping::idle(Animation * a)
{
	std::cout << "Stop jumping, now idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::climbing(Animation * a)
{
	std::cout << "Jump to a wall and start climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Jumping::walking(Animation * a)
{
	std::cout << "Can't walk in the air, don't be ridiculous" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Jumping::shoveling(Animation * a)
{
	std::cout << "There's nothing to shovel in mid air, obviously" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Jumping::swordmanShip(Animation * a)
{
	std::cout << "Can't fight in the air, too heavy" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Jumping::hammering(Animation * a)
{
	std::cout << "Hammer what? oxygen? No." << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
