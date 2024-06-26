#pragma once
#include <SFML/Graphics.hpp>
#include "framework/Core.h"

namespace ly
{
	class World;
	class Application 
	{
	public:
		Application();
		void Run();

		template<typename WorldType>
		weak<WorldType> LoadWorld();


	private:
		void TickInternal(float deltaTime);
		void RenderInternal();

		void virtual Render();
		void virtual Tick(float deltaTime);

		sf::RenderWindow mWindow;
		float mTargetFrameRate;
		sf::Clock mTickClock;

		shared<World> currentWorld;

	};  
	
	template<typename WorldType>
	weak<WorldType> Application::LoadWorld()
	{
		shared<WorldType> newWorld{ new WorldType{this} };
		currentWorld = newWorld;
		return newWorld;
	}
}