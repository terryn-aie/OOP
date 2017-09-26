#pragma once

#include "GameObject.h"

#include "Particles.h"

class Emitter : public GameObject
{
	// Time since the last spawned particle.
	float spawnAccumulator;

public:
	Emitter();

	// Collection of all particles
	BaseParticle particles[100];

	// Current particle id.
	int particleId;

	// Time between each particle spawned.
	float spawnInterval;

	virtual void update();
	virtual void draw();
};