#include "Idle.h"

Idle::Idle()
{
}


Idle::~Idle()
{
}

void Idle::jumping(Animation * a)
{
	std::cout << "Going from Idle to Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Idle::climbing(Animation * a)
{
	std::cout << "Going from Idle to Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Idle::walking(Animation * a)
{
	std::cout << "Going from Idle to walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void Idle::shoveling(Animation * a)
{
	std::cout << "Going from Idle to shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}
void Idle::swordmanShip(Animation * a)
{
	std::cout << "Going from Idle to swordmaship" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}
void Idle::hammering(Animation * a)
{
	std::cout << "Going from Idle to hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

