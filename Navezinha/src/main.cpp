#include <iostream>
#include <memory>
#include <SFML/Graphics.hpp>


#include "framework/Application.h"

using namespace std;

int main()
{
	ly::Application* app = new ly::Application();
	app->Run();

	return 0;
}