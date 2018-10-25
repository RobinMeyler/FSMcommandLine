#include "Shoveling.h"

Shoveling::Shoveling()
{
}

Shoveling::~Shoveling()
{
}

void Shoveling::idle(Animation * a)
{
	std::cout << "Shovel is away, now Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Shoveling::climbing(Animation * a)
{
	std::cout << "Can't climb in the with a shovel out" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}

void Shoveling::walking(Animation * a)
{
	std::cout << "Can't walk with a shovel out, for reasons you don't need to worry about" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}
void Shoveling::jumping(Animation * a)
{
	std::cout << "Can't jump with your shovel out" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}
void Shoveling::swordmanShip(Animation * a)
{
	std::cout << "Your shovel is out, not your sword" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}
void Shoveling::hammering(Animation * a)
{
	std::cout << "Can't hammer with a shovel" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}
