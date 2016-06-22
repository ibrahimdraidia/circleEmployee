#include "Person.h"


Person::Person(std::string last_name, std::string first_name, unsigned short age)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->age = age;
}

Person::Person(){ }

Person::~Person(){}

void Person::setLast_name(std::string last_name){ this->last_name = last_name; }

void Person::setFirst_name(std::string first_name){ this->first_name = first_name; }

void Person::setAge(unsigned short age){ this->age = age; }

std::string Person::getFirst_name() { return this->first_name; }
std::string Person::getLast_name() { return this->last_name;  }
unsigned short Person::getAge() { return this->age;  }

std::string Person::printStat() { return "Firstname: " + this->getFirst_name() + " Lastname: " + this->getLast_name() + " Age" + std::to_string(this->getAge()); }