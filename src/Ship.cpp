#include "Ship.h"

Ship::Ship()
{

}

void Ship::init(char *name, int x, int y, char *serial)
{
	//set up the ship
	setName(name);
	setCoordinates(x, y);
	setCaptain(nullptr);
	_serial = serial;
}

void Ship::setName(char *name)
{
	//set the ship name, cut off at 20 characters
	_name = new char[NAME_MAX_CHAR];
	strncpy(_name, name, NAME_MAX_CHAR);
	_name[NAME_MAX_CHAR - 1] = '\0';
}

void Ship::setCoordinates(int x, int y)
{	
	//set coordinates
	_x = x;
	_y = y;
}

void Ship::setCaptain(spCharacter *captain)
{
	//set the captain of the ship
	_captain = captain;
}

void Ship::doUpdate(const UpdateState &us)
{
	//display ship name
	DebugActor::instance->addDebugString("%s [%s]\n", this->_name, this->_serial);
}