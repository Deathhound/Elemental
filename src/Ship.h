#pragma once
#include "oxygine-framework.h"
#include <string>
using namespace oxygine;

#define NAME_MAX_CHAR 21

//Declare smart pointers
DECLARE_SMART(Ship, spShip);
DECLARE_SMART(Character, spCharacter);

class Ship : public Actor
{
public:
	Ship();

	void init(char *name, int x, int y, char *serial);

	void setName(char *name); //name setting function
	void setCoordinates(int x, int y);
	void setCaptain(spCharacter *captain);

private:
	void doUpdate(const UpdateState &us);

	int _x, _y; //coordinates of the ship
	char *_name; //name of the ship
	spCharacter *_captain; //captian of the ship
	char *_serial; //ship's serial number
};