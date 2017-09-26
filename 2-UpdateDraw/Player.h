#pragma once

class Player
{
public:
	float x;	// x-pos
	float y;	// y-pos

	char upKey;
	char downKey;
	char leftKey;
	char rightKey;

	void update();
	void draw();
};