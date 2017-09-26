#include "Emitter.h"

#include "sfwdraw.h"

Emitter::Emitter()
{
	for (int i = 0; i < 100; ++i)
	{
		particles[i].enabled = false;
	}

	spawnAccumulator = 0.0f;
}

void Emitter::update()
{
	spawnAccumulator += sfw::getDeltaTime();

	// check if it's time to spawn a new one
	// if so, create one!
	if (spawnAccumulator > spawnInterval)
	{
		// look for a particle that isn't in use
		for (int i = 0; i < 100; ++i)
		{
			if (particles[i].enabled == false)
			{
				// reactivate it
				BaseParticle& baby = particles[i];

				baby.posX = 400;
				baby.posY = 300;

				baby.speedX = 0;
				baby.speedY = 2;

				baby.enabled = true;

				spawnAccumulator = 0.0f;
				break;
			}
		}
	}

	// update all of the particles that are active
	for (int i = 0; i < 100; ++i)
	{
		if (particles[i].enabled == true)
		{
			particles[i].update();
		}
	}
}

void Emitter::draw()
{
	for (int i = 0; i < 100; ++i)
	{
		// only draw active particles
		if (particles[i].enabled)
		{
			particles[i].draw();
		}
	}
}