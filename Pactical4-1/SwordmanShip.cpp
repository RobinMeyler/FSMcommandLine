#include "SwordmanShip.h"

SwordmanShip::SwordmanShip()
{
}

SwordmanShip::~SwordmanShip()
{
}

void SwordmanShip::idle(Animation * a)
{
	std::cout << "Going from SwordmanShip to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void SwordmanShip::climbing(Animation * a)
{
	std::cout << "Going from SwordmanShip to climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void SwordmanShip::walking(Animation * a)
{
	std::cout << "Going from SwordmanShip to walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void SwordmanShip::jumping(Animation * a)
{
	std::cout << "Going from SwordmanShip to jumpinh" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void SwordmanShip::shoveling(Animation * a)
{
	std::cout << "Going from SwordmanShip to shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}
void SwordmanShip::hammering(Animation * a)
{
	std::cout << "Going from SwordmanShip to hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
