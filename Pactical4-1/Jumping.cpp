#include "Jumping.h"



Jumping::Jumping()
{
}


Jumping::~Jumping()
{
}

void Jumping::idle(Animation * a)
{
	std::cout << "Going from Jumping to Idling" << std::endl;
	delete this;
}
