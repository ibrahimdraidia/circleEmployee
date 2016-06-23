#include <SFML\Graphics.hpp>


#include "Employee.h"


int main()
{

	sf::RenderWindow window(sf::VideoMode(800, 600), "Circle Employee",sf::Style::Close);
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		// clean window
		window.clear(sf::Color::Black);

		Employee employee1(&window, 150, 150);
		Employee employee2(&window, 40, 280);
		Employee employee3(&window, 300, 400);
		
		window.display();
	}

	return 0;
}