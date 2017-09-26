#include <iostream>

#include "sfwdraw.h"

#include "Player.h"
#include "Shapes.h"

int main()
{
	// Create a window and a drawing context
	sfw::initContext(800, 600, "SFW");

	unsigned int imgKob = sfw::loadTextureMap("res/kob.png");
	unsigned int imgTer = sfw::loadTextureMap("res/terry.jpg");
	unsigned int imgFont = sfw::loadTextureMap("res/fontmap.png", 16, 16);

	// Set the background color
	sfw::setBackgroundColor(BLACK);

	Player me;

	me.upKey = 'W';
	me.downKey = 'S';
	me.leftKey = 'A';
	me.rightKey = 'D';

	me.x = 200;
	me.y = 300;

	Player sibling;

	sibling.upKey = 'I';
	sibling.downKey = 'K';
	sibling.leftKey = 'J';
	sibling.rightKey = 'L';

	sibling.x = 400;
	sibling.y = 300;

	Circle disc;
	disc.posX = 400;
	disc.posY = 300;
	disc.radius = 50;

	Line straight;
	straight.startX = 400;
	straight.startY = 600;

	straight.endX = 400;
	straight.endY = 0;

	Box rect;
	rect.bottomLeftX = 100;
	rect.bottomLeftY = 100;

	rect.topRightX = 200;
	rect.topRightY = 300;

	// Set up the game loop
	while (sfw::stepContext())
	{
		// game code goes here
		//sfw::drawCircle(400, 300, 70);
		//rect.draw();

		//disc.draw();
		//straight.draw();

		sibling.update();
		//sibling.draw();

		me.update();
		//me.draw();

		sfw::drawString(imgFont, "BREAK TIME", 100, 500, 50, 50);
		sfw::drawTexture(imgKob, 400, 300, 300, 300, sfw::getTime() * 20);
		sfw::drawTexture(imgTer, 200, 150, 150, 300);
		sfw::drawTexture(imgTer, 600, 150, 150, 300);
		
	}

	// Clean up
	sfw::termContext();
}