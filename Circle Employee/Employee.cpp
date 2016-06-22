#include "Employee.h"



Employee::~Employee()
{
}

void Employee::setJob(std::string job)
{
	this->job = job;
}

void Employee::setSociety(std::string society)
{
	this->society = society;
}

std::string Employee::getJob() { return this->job;  }
std::string Employee::getSociety() { return this->society;  }

unsigned short Employee::getExperience()
{
	return 0;
}

void  Employee::toString()
{
	std::cout << "Firstname: " <<  this->getFirst_name() <<  std::endl;
	std::cout << "Lastname: " << this->getLast_name() << std::endl;
	std::cout << "Age: " << this->getAge() << std::endl;
	std::cout << "Job: " << this->getJob() << std::endl;
	std::cout << "Society: " << this->getSociety() << std::endl;
}