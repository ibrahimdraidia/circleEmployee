#pragma once

#include<iostream>

#include "Person.h"

class Employee : public Person
{
public:
	Employee() : Person() { };
	~Employee();
	void toString();
	void setJob(std::string job);
	void setSociety(std::string society);
	std::string getJob();
	std::string getSociety();
	unsigned short getExperience();

private:
	std::string society;
	std::string job;
};

