#pragma once

class Circle
{
public:
	float posX;
	float posY;

	float radius;

	void draw();
};

class Line
{
public:
	float startX;
	float startY;

	float endX;
	float endY;

	void draw();
};

class Box
{
public:
	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	void draw();
};