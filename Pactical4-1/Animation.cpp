#include "Animation.h"
#include "Idle.h"


Animation::Animation()
{
	current = new Idle();
}

Animation::~Animation()
{
	delete current;
}


void Animation::idle()
{
	//last = "Idle";
	current->idle(this);
}

void Animation::jumping()
{
	//last = "Jumping";
	current->jumping(this);
}

void Animation::climbing()
{
	//last = "Climbing";
	current->climbing(this);
}

void Animation::walking()
{
	//last = "Walking";
	current->walking(this);
}

void Animation::hammering()
{
	//last = "Hammering";
	current->hammering(this);
}

void Animation::shoveling()
{
	//last = "Shoveling";
	current->shoveling(this);
}

void Animation::swordmanShip()
{
	//last = "SwordmanShip";
	current->swordmanShip(this);
}

