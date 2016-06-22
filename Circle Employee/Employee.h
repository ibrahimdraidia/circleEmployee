#pragma once

#include<iostream>
#include <SFML\Graphics.hpp>

#include "Person.h"

class Employee : public Person
{
public:
	Employee() : Person() { };
	Employee(sf::CircleShape circle, sf::Text,float x, float y);
	~Employee();
	void toString();
	void setJob(std::string job);
	void setSociety(std::string society);
	std::string getJob();
	std::string getSociety();
	unsigned short getExperience();
	sf::CircleShape getCircle();
	sf::Text getText();

private:
	std::string society;
	std::string job;
	sf::CircleShape circle;
	sf::Text text;
	sf::Font font;
};

