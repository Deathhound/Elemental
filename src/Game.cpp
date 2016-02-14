#include "Game.h"

Game::Game()
{

}

void Game::init()
{
	//create new Space and attach to stage
	_space = new Space;
	_space->init(50, 50);
	_space->attachTo(getStage());

	//create a new Location and attach it to the space
	_location = new Location();
	_location->init(_space->getX(), _space->getY());
	_location->attachTo(this);

	//create new Ship and attach it to the space
	_playerShip = new Ship;
	_playerShip->init("Shogun", _space->getX(), _space->getY(), "F4T455");
	_playerShip->attachTo(_location);

	//create a Player and attach it to the Ship
	_player = new Player;
	_player->init("Heiko", "Evilyn", "");
	_player->attachTo(_playerShip);

	//create a TravelBar
	_travelBar = new TravelBar;
	_travelBar->init();
	_travelBar->attachTo(_playerShip);
}

void Game::doUpdate(const UpdateState &us)
{

}