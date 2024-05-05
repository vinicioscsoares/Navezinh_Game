#include <iostream>
#include <memory>
#include <SFML/Graphics.hpp>


#include "framework/Application.h"

using namespace std;

int main()
{
	//Allocando mem�ria no heap.
	unique_ptr<ly::Application> app = make_unique<ly::Application>();
	app->Run();
	 
	return 0;
}