#include "Employee.h"


Employee::Employee(sf::CircleShape circle, sf::Text text,float x, float y)
{
	this->circle = circle;
	this->text = text;

	// load font file
	if (!this->font.loadFromFile("arial.ttf"))
		std::cerr << "Loading font file error" << std::endl;

	
	// set circle
	this->circle.setFillColor(sf::Color::Blue);
	this->circle.setRadius(80);
	this->circle.setPosition(x,y);

	//set text
	this->text.setFont(font);
	this->text.setString("de la merde");
	this->text.setCharacterSize(11);
	this->text.setColor(sf::Color::White);
	this->text.setStyle(sf::Text::Bold | sf::Text::Underlined);
	this->text.setPosition((float)(this->circle.getRadius()+x) -  this->text.getCharacterSize() * this->text.getString().getSize()/2, (float)this->circle.getRadius()+y);
	
}
Employee::~Employee(){}

void Employee::setJob(std::string job){ this->job = job; }

void Employee::setSociety(std::string society){ this->society = society; }

std::string Employee::getJob() { return this->job;  }
std::string Employee::getSociety() { return this->society;  }

unsigned short Employee::getExperience() { return 0; }

void  Employee::toString()
{
	std::cout << "Firstname: " <<  this->getFirst_name() <<  std::endl;
	std::cout << "Lastname: " << this->getLast_name() << std::endl;
	std::cout << "Age: " << this->getAge() << std::endl;
	std::cout << "Job: " << this->getJob() << std::endl;
	std::cout << "Society: " << this->getSociety() << std::endl;
}

sf::CircleShape Employee::getCircle() { return this->circle; }

sf::Text Employee::getText() { return this->text; }