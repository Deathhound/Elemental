#pragma once
#include "oxygine-framework.h"
#include "Ship.h"
using namespace oxygine;

//Declare smart pointers
DECLARE_SMART(Location, spLocation);
DECLARE_SMART(Ship, spShip);

class Location : public Actor
{
public:
	Location();

	//initialization function
	void init(int x, int y);
	void setCoordinates(int x, int y);
	void addShip();

private:
	void doUpdate(const UpdateState &us);
	//will have Solar Systems in here at some point

	int _x, _y;
	spShip *_ships;//Ships at this location
	int _shipCount;//keeps track of how many ships there are at the location
};