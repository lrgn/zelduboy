#include <Arduboy2.h>
#include "Game.hpp"
#include "view/ViewSelector.hpp"
#include "chunksdata.h"

Map *mapHouse = new Map(mapHouseData);

Arduboy2 arduboy;
Game *game;
ViewSelector *viewSelector;

void setup()
{
	// Initializa the serial port for debug purpose
	Serial.begin(9600);

	// Initializa Arduboy2 library
	arduboy.begin();
	arduboy.setFrameRate(30);

	game = new Game();
	viewSelector = new ViewSelector(game);
}

void loop()
{
	if (!(arduboy.nextFrame()))
		return;

	viewSelector->handleInput();
	viewSelector->draw();
}
