#pragma once

#include <iostream>
#include <string>

class Person
{
public:
	Person();
	Person(std::string last_name,std::string first_name, unsigned short age);
	~Person();
	std::string printStat();
	void setFirst_name(std::string first_name);
	void setLast_name(std::string last_name);
	void setAge(unsigned short age);
	std::string getFirst_name();
	std::string getLast_name();
	unsigned short getAge();

private:
	std::string first_name;
	std::string last_name;
	unsigned short age;
};

