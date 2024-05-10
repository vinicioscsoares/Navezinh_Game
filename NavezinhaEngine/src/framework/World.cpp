#include "framework/World.h"
#include "framework/Core.h"


namespace ly

{
	World::World(Application* owningApp)
		: mOwningApp{owningApp},
		mBeganPlay(false)
	{
	
	}
	void World::BeginPlayInternal()
	{
		if (!mBeganPlay)
		{

			mBeganPlay = true;
			bool mBeganPlay;

		}
	
	}

	void World::TickInternal(float deltaTime)
	{
		Tick(deltaTime);
	}

	World::~World()
	{
	}

	void World::BeginPlay()
	{

		LOG("Começar a jogar");

	}

	void World::Tick(float deltaTime)
	{
		LOG("taxa de FrameRates %f", 1.f / deltaTime);

	}

}