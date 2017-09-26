#include "Particles.h"

#include "sfwdraw.h"

void BaseParticle::update()
{
	posX += speedX;
	posY += speedY;
}

void BaseParticle::draw()
{
	sfw::drawCircle(posX, posY, 7);
}

void BoxParticle::draw()
{
	float halfX = dimX / 2.0f;
	float halfY = dimY / 2.0f;

	// left
	sfw::drawLine(posX - halfX, posY - halfY,
				  posX - halfX, posY + halfY);

	// right
	sfw::drawLine(posX + halfX, posY - halfY,
				  posX + halfX, posY + halfY);

	// top
	sfw::drawLine(posX - halfX, posY + halfY,
				  posX + halfX, posY + halfY);

	// bottom
	sfw::drawLine(posX - halfX, posY - halfY,
				  posX + halfX, posY - halfY);
}