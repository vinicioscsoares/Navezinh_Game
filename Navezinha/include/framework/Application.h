#pragma once
#include <SFML/Graphics.hpp>

namespace ly
{
	class Application 
	{
	public:
		Application();
		void Run();
	private:
		void TickInternal(float deltaTime);
		void RenderInternal();

		void virtual Tick(float deltaTime);
		void virtual Render();

		sf::RenderWindow mWindow;
		float mTargetFrameRate;
		sf::Clock mTickClock;
	};  
}