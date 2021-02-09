#pragma once
#include "SFML/System/Vector2.hpp"

class Force
{
private:
	// force vector, the (x,y) 
	sf::Vector2f forceVector;
	// direction of the force vector, has a length of 1
	sf::Vector2f forceVectorDirection;
	// magnitude of the force vector
	float forceStrength;
public:
	sf::Vector2f getForceVector();
	void setForceVector(sf::Vector2f vectorDirection);
	float getForceStrength();
	void setForceStrength(float force);
	void setVectorDirection(sf::Vector2f vector);
	sf::Vector2f getVectorDirection();

};