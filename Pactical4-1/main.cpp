// Robin Meyler
// Login: C00231699
// Date: October 2018
// Program: Finite State Machine - command line

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 

#include <SFML/Graphics.hpp>

#include <string.h>
#include <iostream>
#include <chrono>
#include <thread>

#include "State.h"


int main()
{
	std::cout << "I: Idle\nW: Walking\nJ: Jumping\nC: Climbing\ns: Shoveling\nF: Swordmanship\nH: Hammering" << std::endl;
	Animation fsm;
	fsm.idle();
	
	std::chrono::milliseconds sleeps(1000);

	while (true)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
		{
			fsm.climbing();
			std::this_thread::sleep_for(sleeps);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
		{
			fsm.jumping();
			std::this_thread::sleep_for(sleeps);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
		{
			fsm.idle();
			std::this_thread::sleep_for(sleeps);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			fsm.walking();
			std::this_thread::sleep_for(sleeps);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			fsm.shoveling();
			std::this_thread::sleep_for(sleeps);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
		{
			fsm.swordmanShip();
			std::this_thread::sleep_for(sleeps);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
		{
			fsm.hammering();
			std::this_thread::sleep_for(sleeps);
		}
	}
}