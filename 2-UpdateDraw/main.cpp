#include <iostream>

#include "sfwdraw.h"

#include "Player.h"

int main()
{
	// Create a window and a drawing context
	sfw::initContext(800, 600, "SFW");

	// Set the background color
	sfw::setBackgroundColor(BLACK);

	Player me;

	me.upKey = 'W';
	me.downKey = 'S';
	me.leftKey = 'A';
	me.rightKey = 'D';

	me.x = 400;
	me.y = 300;

	Player sibling;

	sibling.upKey = 'I';
	sibling.downKey = 'K';
	sibling.leftKey = 'J';
	sibling.rightKey = 'L';

	sibling.x = 100;
	sibling.y = 100;

	// Set up the game loop
	while (sfw::stepContext())
	{
		// game code goes here
		//sfw::drawCircle(400, 300, 70);

		sibling.update();
		sibling.draw();

		me.update();
		me.draw();
	}

	// Clean up
	sfw::termContext();
}