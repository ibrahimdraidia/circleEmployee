#include <SFML\Graphics.hpp>


#include "Employee.h"


int main()
{

	sf::RenderWindow window(sf::VideoMode(800, 600), "Circle Employee");
	sf::CircleShape circle;
	sf::Text text;

	Employee employee1(circle,text,150,150);
	Employee employee2(circle,text,40, 280);
	Employee employee3(circle,text,300, 400);
	
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

		// draw circle
		window.draw(employee1.getCircle());
		window.draw(employee2.getCircle());
		window.draw(employee3.getCircle());
		// draw text
		window.draw(employee1.getText());
		window.draw(employee2.getText());
		window.draw(employee3.getText());
		
		window.display();
	}

	return 0;
}