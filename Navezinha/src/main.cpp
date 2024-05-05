#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
	sf::RenderWindow renderWindow(sf::VideoMode(200, 200), "Meu Joguinho");
	while (renderWindow.isOpen()) {
		sf::Event windowEvent;
		while (renderWindow.pollEvent(windowEvent))
		{
			if (windowEvent.type == sf::Event::EventType::Closed)
			{
				renderWindow.close();
			}
		}
	}
	return 0;
}