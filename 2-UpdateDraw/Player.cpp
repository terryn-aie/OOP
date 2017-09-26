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
}

void Player::draw()
{
	sfw::drawCircle(x, y, 25);
}