#pragma once

#include <string>

class Person
{
protected:
	std::string fullName;

	int happiness;

public:
	Person();
	Person(std::string initialName, int initialHappiness);

	// Prints a greeting to the console! :)
	virtual void greet();

	// Returns true if happy, and false if not.
	bool isHappy();
};