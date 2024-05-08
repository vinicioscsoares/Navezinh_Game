
#include "framework/Application.h"
#include "framework/Core.h"
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
				TickInternal(targetDeltaTime);
				RenderInternal();
			}
			
			LOG("Taxa de Framerates: %f", 1.f / frameDeltaTime);
		}
	}

	void Application::TickInternal(float deltaTime) 
	{

		Tick(deltaTime);
		
	}
	void Application::RenderInternal()
	{

		mWindow.clear();
		
		Render();

		mWindow.display();
		


	}

	void Application::Render()
	{

		sf::RectangleShape rect{ sf::Vector2f(200,200) };
		rect.setFillColor(sf::Color::Blue);
		rect.setPosition(mWindow.getSize().x / 2.f, mWindow.getSize().y / 2.f);
		rect.setOrigin(100,100);
		

		
		mWindow.draw(rect);

	}


	void Application::Tick(float deltaTime)
	{

	}
}