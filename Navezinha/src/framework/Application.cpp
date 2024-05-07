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
		while (mWindow.isOpen())
		{
			sf::Event windowEvent;
			while (mWindow.pollEvent(windowEvent))
			{
				if (windowEvent.type == sf::Event::EventType::Closed)
				{
					mWindow.close();
				}
			}

			float frameDeltaTime = mTickClock.restart().asSeconds();

			accumulatedTime += frameDeltaTime;
			while (accumulatedTime > targetDeltaTime) 
			{
				accumulatedTime -= targetDeltaTime;
				Tick(targetDeltaTime);
				Render();
			}
		}
	}

	void Application::Tick(float deltaTime) 
	{
		
	}
	void Application::Render()
	{

		mWindow.clear();
		


	}
}