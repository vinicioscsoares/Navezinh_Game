#include <iostream>
#include <memory>
#include <SFML/Graphics.hpp>


#include "framework/Application.h"


int main()
{
	//Allocando mem�ria no heap.
	std::unique_ptr<ly::Application> app = std::make_unique<ly::Application>();

	app->Run();
	 
	return 0;
}