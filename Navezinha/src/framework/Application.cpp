#include "framework/Application.h"
#include <iostream>

namespace ly {
	Application::Application()
		: mWindow{ sf::VideoMode(800, 940), "Navezinha" },
		mTargetFrameRate{60.f},
		mTickClock{}
	{

	}

	void Application::Run()
	{
		mTickClock.restart();
		float accumulatedTime = 0.f;
		float targetDeltaTime = 1.f / mTargetFrameRate;
		while (mWindow.isOpen()) {
			sf::Event windowEvent;
			while (mWindow.pollEvent(windowEvent))
			{
				if (windowEvent.type == sf::Event::EventType::Closed)
				{
					mWindow.close();
				}
			}

			accumulatedTime += mTickClock.restart().asSeconds();
			while (accumulatedTime < targetDeltaTime) 
			{
				accumulatedTime -= targetDeltaTime;
				Tick(targetDeltaTime);
				Render();
			}
		}
	}

	void Application::Tick(float deltaTime) 
	{
		std::cout << "contagem de framerate: " << 1.f / deltaTime << std::endl;
	}
	void Application::Render()
	{


	}
}