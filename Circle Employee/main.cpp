#include "Employee.h"


int main()
{
	Employee john;

	// person data
	john.setAge(25);
	john.setFirst_name("GREEN");
	john.setLast_name("John");

	// employee data
	john.setJob("Software Developer");
	john.setSociety("Google");

	john.toString();

	getchar();

	return 0;
}