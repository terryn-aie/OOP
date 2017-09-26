#include "Person.h"
#include "Officer.h"

#include "sfwdraw.h"
#include "Player.h"
#include "Particles.h"
#include "Emitter.h"

int main()
{
	sfw::initContext(800, 600);

	sfw::setBackgroundColor(BLACK);

	Player me;
	me.x = 400;
	me.y = 300;

	BaseParticle p;
	p.posX = 400;
	p.posY = 300;

	p.speedX = 2;
	p.speedY = -3;

	BoxParticle box;
	box.speedX = -1;
	box.speedY = -0.5f;

	box.posX = 700;
	box.posY = 500;

	box.dimX = 20;
	box.dimY = 30;

	Emitter emitter;
	emitter.spawnInterval = 3.0f;

	while (sfw::stepContext())
	{
		std::cout << sfw::getDeltaTime() << std::endl;
		emitter.update();
		emitter.draw();

		box.update();
		box.draw();

		p.update();
		p.draw();

		me.update();
		me.draw();
	}

	sfw::termContext();

	return 0;
}