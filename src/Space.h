#pragma once
#include "oxygine-framework.h"
using namespace oxygine;

//define constants
#define X_MAX 999
#define Y_MAX 999

//Declare smart pointers
DECLARE_SMART(Space, spSpace);

class Space : public Actor
{
public:
	Space();

	void init(int x, int y);

	int getX(); //gets the current X coordinate
	int getY(); //gets the current Y coordinate
	void setCoordinates(int x, int y); //set the default location

private:
	void doUpdate(const UpdateState &us); //update function

	int _currentX, _currentY; //current coordinates
};