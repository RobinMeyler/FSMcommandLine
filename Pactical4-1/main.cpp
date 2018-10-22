#include <iostream>
#include <chrono>
#include <thread>

#include "State.h"
#include "Idle.h"
#include "Jumping.h"
#include "Climbing.h"

int main()
{
	Animation fsm;
	int i = 0;
	std::chrono::milliseconds sleeps(1000);
	while (true)
	{
		if (i == 0)
		{
			fsm.jumping();
			std::this_thread::sleep_for(sleeps);
			i = 1;
		}

		else if (i == 1)
		{
			fsm.climbing();
			std::this_thread::sleep_for(sleeps);
			i = 0;
		}
	}
}