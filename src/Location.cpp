#include "setup.h"
#include "Location.h"

Location::Location()
{

}

void Location::init(int x, int y)
{
	//set coordinates of this location
	setCoordinates(x,y);

	//create 10 Ship slots at this location
	spShip ships[10];

	//add the player ship to the first element of ships
	_ships = new spShip[10];
}	

void Location::doUpdate(const UpdateState &us)
{

}

void Location::setCoordinates(int x, int y)
{
	_x = x;
	_y = y;
}

