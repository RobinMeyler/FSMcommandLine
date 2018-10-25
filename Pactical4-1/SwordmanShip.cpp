#include "SwordmanShip.h"

SwordmanShip::SwordmanShip()
{
}

SwordmanShip::~SwordmanShip()
{
}

void SwordmanShip::idle(Animation * a)
{
	std::cout << "Sword away, idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void SwordmanShip::climbing(Animation * a)
{
	std::cout << "Can't climb, sword is too heavy" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}

void SwordmanShip::walking(Animation * a)
{
	std::cout << "Walking with your sword out" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void SwordmanShip::jumping(Animation * a)
{
	std::cout << "Sword is too heavy to jump" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}
void SwordmanShip::shoveling(Animation * a)
{
	std::cout << "Too hard to dig with a sword" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}
void SwordmanShip::hammering(Animation * a)
{
	std::cout << "Too hard to hammer witha sword" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}
