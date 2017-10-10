#ifndef GLOBALS_H
#define GLOBALS_H

#include <Arduboy2.h>

#define TILE_SIZE 16

#define SCREEN_WIDTH       128
#define SCREEN_HEIGHT       64
#define SCREEN_HALF_WIDTH   64 // SCREEN_WIDTH  / 2
#define SCREEN_HALF_HEIGHT  32 // SCREEN_HEIGHT / 2

#define PLAYER_WIDTH       16
#define PLAYER_HEIGHT      16
#define PLAYER_HALF_WIDTH   8 // PLAYER_WIDTH  / 2
#define PLAYER_HALF_HEIGHT  8 // PLAYER_HEIGHT / 2

#define PLAYER_CENTER_POS_LEFT   56 // SCREEN_HALF_WIDTH  - PLAYER_HALF_WIDTH
#define PLAYER_CENTER_POS_RIGHT  72 // SCREEN_HALF_WIDTH  + PLAYER_HALF_WIDTH
#define PLAYER_CENTER_POS_TOP    24 // SCREEN_HALF_HEIGHT - PLAYER_HALF_HEIGHT
#define PLAYER_CENTER_POS_BOTTOM 40 // SCREEN_HALF_HEIGHT + PLAYER_HALF_HEIGHT

extern Arduboy2 arduboy;

#endif
