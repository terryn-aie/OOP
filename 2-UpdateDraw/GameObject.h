#pragma once

#include <iostream>

class GameObject
{
public:
	std::string name;

	bool enabled;

	virtual void update();
	virtual void draw();
};