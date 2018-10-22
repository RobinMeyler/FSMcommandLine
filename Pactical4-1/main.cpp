// Robin Meyler

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
	fsm.idle();
	bool cClicked = false;
	bool jClicked = false;
	bool iClicked = false;
	
	
	std::chrono::milliseconds sleeps(1000);
	std::chrono::milliseconds lessSleeps(100);
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
	}
}