#include "Animation.h"
#include "Idle.h"


Animation::Animation()
{
	current = new Idle();
}


Animation::~Animation()
{
	current = new Idle();
}

void Animation::idle()
{
	current->idle(this);
}

void Animation::jumping()
{
	current->jumping(this);
}

void Animation::climbing()
{
	current->climbing(this);
}

void Animation::walking()
{
	current->walking(this);
}

void Animation::hammering()
{
	current->hammering(this);
}

void Animation::shoveling()
{
	current->shoveling(this);
}

void Animation::swordmanShip()
{
	current->swordmanShip(this);
}

