

#include "State.h"


int main()
{
	Animation fsm;
	int i = 0;
	while (true)
	{
		if (i == 0)
		{
			fsm.jumping();
		}

		else
		{
			fsm.climbing();
			i = 0;
		}
	}
}