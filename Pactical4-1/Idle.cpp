#include "Idle.h"

Idle::Idle()
{
}


Idle::~Idle()
{
}

void Idle::jumping(Animation * a)
{
	std::cout << "Jump from standing still" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Idle::climbing(Animation * a)
{
	std::cout << "Start climbing the wall" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Idle::walking(Animation * a)
{
	std::cout << "Start walking from still" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void Idle::shoveling(Animation * a)
{
	std::cout << "Start shoveling what's near you" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}
void Idle::swordmanShip(Animation * a)
{
	std::cout << "Weapon is deployed, swinging wildly" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}
void Idle::hammering(Animation * a)
{
	std::cout << "Start hammer what's near you" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

