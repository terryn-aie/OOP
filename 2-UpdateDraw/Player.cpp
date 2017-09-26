#include "Player.h"

#include "sfwdraw.h"

void Player::update()
{
	// up
	if (sfw::getKey(upKey))
	{
		y++;
	}

	// down
	if (sfw::getKey(downKey))
	{
		y--;
	}

	// left
	if (sfw::getKey(leftKey))
	{
		x--;
	}

	// right
	if (sfw::getKey(rightKey))
	{
		x++;
	}

	if (x < 0)
	{
		x = 800;
	}

	if (x > 800)
	{
		x = 0;
	}

	if (y < 0)
	{
		y = 600;
	}

	if (y > 600)
	{
		y = 0;
	}
}

void Player::draw()
{
	sfw::drawCircle(x, y, 25);
}