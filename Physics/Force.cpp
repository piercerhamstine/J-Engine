#include "Force.h"
#include "SFML/System/Vector2.hpp"
#include <math.h>

Force::Force(sf::Vector2f vectorDirection, float forceStrength)
{
	this->setForceVector(forceVector);
}
sf::Vector2f Force::getForceVector()
{
	return this->forceVector;
}
void Force::setForceVector(sf::Vector2f vectorDirection)
{
	this->forceVector = vectorDirection;
	return;
}
float Force::getForceStrength()
{
	return this->forceStrength;
}
void Force::setForceStrength(float force)
{
	this->forceStrength = force;
}
void Force::setVectorDirection(sf::Vector2f vector)
{
	float vectorMagnitude = sqrtf((vector.x) * (vector.x) + (vector.y) * (vector.y));

	sf::Vector2f newVector;
		
	newVector.x = vector.x / vectorMagnitude;
	newVector.y = vector.y / vectorMagnitude;

	this->forceVectorDirection = newVector;
}
sf::Vector2f Force::getVectorDirection()
{
	return this->forceVectorDirection;
}







