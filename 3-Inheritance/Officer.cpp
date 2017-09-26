#include "Officer.h"

#include <iostream>

Officer::Officer()
{
	fullName = "";
	happiness = 50;
	badgeNumber = 0;
}

Officer::Officer(std::string initialName, int initialHappiness, int initialBadgeNumber)
{
	fullName = initialName;
	happiness = initialHappiness;
	badgeNumber = initialBadgeNumber;
}

void Officer::greet()
{
	Person::greet();
	std::cout << "Officer Numbah #" << badgeNumber << "." << std::endl;
}