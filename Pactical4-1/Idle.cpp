#include "Idle.h"
#include "Jumping.h"
#include "Climbing.h"

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
