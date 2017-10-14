#ifndef BITMAPS_H
#define BITMAPS_H

const unsigned char PROGMEM items_plus_mask[] =
{
// width, height,
	8, 16,
// FRAME 00
	0x00, 0xff, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xff,
	0x00, 0xff, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xff,

// FRAME 01
	0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xff,
	0xfe, 0xff, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x06, 0x04, 0x0e, 0x08, 0x7f, 0x0b, 0xff,
	0x0b, 0xff, 0x08, 0x7f, 0x04, 0x0e, 0x00, 0x06,

// FRAME 02
	0x00, 0xf8, 0xf0, 0xf8, 0x20, 0xf8, 0x20, 0xf0,
	0x20, 0xf0, 0x20, 0xf8, 0xf0, 0xf8, 0x00, 0xf8,
	0x00, 0x07, 0x07, 0x0f, 0x0c, 0x1f, 0x08, 0x1f,
	0x08, 0x1f, 0x0c, 0x1f, 0x07, 0x0f, 0x00, 0x07,

// FRAME 03
	0x00, 0x00, 0x00, 0xe0, 0xe0, 0xf8, 0x70, 0xfc,
	0x90, 0xfe, 0xe0, 0xff, 0xc0, 0xff, 0x00, 0xff,
	0x00, 0x00, 0x00, 0x7f, 0x71, 0xff, 0x06, 0x7f,
	0x07, 0x0f, 0x02, 0x07, 0x00, 0x03, 0x00, 0x00,

// FRAME 04
	0x00, 0xf0, 0xc0, 0xf8, 0x08, 0xfc, 0x0c, 0xfe,
	0x04, 0xfe, 0x04, 0x3e, 0x18, 0x7c, 0x00, 0x78,
	0x00, 0x0f, 0x00, 0x1f, 0x00, 0x3f, 0x08, 0x7f,
	0x10, 0x7f, 0x10, 0x7c, 0x0c, 0x3e, 0x00, 0x1e,

// FRAME 05
	0x00, 0x00, 0x00, 0x1c, 0x18, 0x3c, 0x18, 0xfc,
	0x58, 0xfc, 0x18, 0xfc, 0xd8, 0xfc, 0x00, 0xfc,
	0x00, 0x30, 0x30, 0x78, 0x38, 0x7c, 0x38, 0x7f,
	0x3b, 0x7f, 0x18, 0x3f, 0x3f, 0x7f, 0x00, 0x7f,

// FRAME 06
	0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf8, 0x18, 0xfc,
	0x0c, 0x1e, 0x04, 0x0e, 0x00, 0xfe, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0f, 0x0f, 0x1f, 0x18, 0x3f,
	0x30, 0x78, 0x20, 0x70, 0x00, 0x7f, 0x00, 0x00,

// FRAME 07
	0x00, 0x00, 0x00, 0x18, 0x18, 0x3c, 0x0c, 0x3e,
	0x06, 0xff, 0x0c, 0x3e, 0x18, 0x3c, 0x00, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x10, 0xfb,
	0x10, 0xfc, 0x00, 0xf8, 0x00, 0xf0, 0x00, 0x00,

// FRAME 08
	0x00, 0x00, 0x00, 0x18, 0x10, 0xbc, 0x9c, 0xfe,
	0x9c, 0xfe, 0x9c, 0xfe, 0x10, 0xbc, 0x00, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xff,
	0x7d, 0xff, 0x00, 0xff, 0x00, 0x01, 0x00, 0x00,

// FRAME 09
	0x00, 0x80, 0x80, 0xe0, 0xe0, 0xf8, 0xb8, 0xfc,
	0xec, 0xfe, 0xfc, 0xfe, 0x3c, 0xfe, 0x00, 0xfc,
	0x00, 0x1f, 0x0f, 0x3f, 0x0b, 0x3f, 0x06, 0x3f,
	0x03, 0x7f, 0x20, 0x7f, 0x00, 0x67, 0x00, 0x01,

// FRAME 10
	0x00, 0x80, 0x00, 0x8e, 0x04, 0xfe, 0xb4, 0xfe,
	0xb4, 0xfe, 0x04, 0xfe, 0x00, 0x8e, 0x00, 0x80,
	0x00, 0x0f, 0x0f, 0x1f, 0x18, 0x3f, 0x31, 0x7f,
	0x31, 0x7f, 0x18, 0x3f, 0x0f, 0x1f, 0x00, 0x0f,

// FRAME 11
	0x00, 0x0e, 0x0c, 0x9e, 0x90, 0xfc, 0xdc, 0xfe,
	0x0c, 0xfe, 0x90, 0xfc, 0x0c, 0x9e, 0x00, 0x0e,
	0x00, 0x1f, 0x0f, 0x3f, 0x1f, 0x7f, 0x0f, 0x7f,
	0x1e, 0x7f, 0x0f, 0x7f, 0x00, 0x3f, 0x00, 0x1f,

// FRAME 12
	0x00, 0x00, 0x00, 0x80, 0x00, 0xc0, 0x40, 0xe0,
	0x00, 0xf8, 0x00, 0xcc, 0x00, 0x84, 0x00, 0x00,
	0x00, 0x1f, 0x03, 0x3f, 0x03, 0x7f, 0x00, 0x7f,
	0x00, 0x7f, 0x00, 0x7f, 0x00, 0x3f, 0x00, 0x1f,
};

const unsigned char PROGMEM link_plus_mask[] =
{
// width, height,
	16, 16,
// FRAME 00
	0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x78, 0xfc, 0xc0, 0xfe, 0x96, 0xff, 0x0a, 0xff, 0x8a, 0xff,
	0x8e, 0xff, 0x0e, 0xff, 0x9c, 0xfe, 0xc0, 0xfc, 0x78, 0xfc, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0c, 0x0c, 0x5e, 0x06, 0xff, 0x51, 0xff, 0x5b, 0xff, 0x5a, 0xff, 0x3b, 0xff,
	0x3b, 0xff, 0x22, 0xff, 0x1b, 0xff, 0x19, 0xff, 0x0e, 0x5f, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00,

// FRAME 01
	0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x78, 0xfc, 0xc0, 0xfc, 0x9c, 0xfe, 0x0e, 0xff, 0x8e, 0xff,
	0x8a, 0xff, 0x0a, 0xff, 0x96, 0xff, 0xc0, 0xfe, 0x78, 0xfc, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x0e, 0x5f, 0x19, 0xff, 0x1b, 0xff, 0x22, 0xff, 0x3b, 0xff,
	0x3b, 0xff, 0x5a, 0xff, 0x5b, 0xff, 0x51, 0xff, 0x06, 0xff, 0x0c, 0x5e, 0x00, 0x0c, 0x00, 0x00,

// FRAME 02
	0x00, 0x00, 0x00, 0x08, 0x00, 0xd8, 0x80, 0xdc, 0xcc, 0xfe, 0x1c, 0xfe, 0xda, 0xff, 0xb6, 0xff,
	0x0e, 0xff, 0xee, 0xff, 0xf6, 0xff, 0x0c, 0xfe, 0x78, 0xfc, 0x30, 0x78, 0x00, 0x30, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x01, 0xff, 0x3b, 0xff, 0x03, 0xff, 0x5b, 0xff,
	0x58, 0xff, 0x43, 0xff, 0x5d, 0xff, 0x18, 0xff, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 03
	0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0x00, 0xb8, 0x98, 0xfc, 0x38, 0xfc, 0xb4, 0xfe, 0x6c, 0xfe,
	0x1c, 0xfe, 0xdc, 0xfe, 0xec, 0xfe, 0x1c, 0xfe, 0xf8, 0xfc, 0x38, 0xfc, 0x00, 0x38, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0xc3, 0x43, 0xe7, 0x42, 0xff, 0x5b, 0xff, 0x5b, 0xff,
	0x20, 0xff, 0x3b, 0xff, 0x1b, 0xff, 0x40, 0xff, 0x70, 0xf9, 0x00, 0xf0, 0x00, 0x80, 0x00, 0x00,

// FRAME 04
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf8, 0x00, 0xf8, 0x68, 0xfc, 0xb4, 0xfe, 0xf4, 0xfe,
	0xf4, 0xfe, 0xf4, 0xfe, 0xe8, 0xfc, 0x00, 0xf8, 0xf0, 0xf8, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x7f, 0x16, 0xff, 0x38, 0xff, 0x37, 0xff, 0x37, 0xff,
	0x3b, 0xff, 0x3d, 0xff, 0x5e, 0xff, 0x58, 0xff, 0x06, 0xff, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x00,

// FRAME 05
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf8, 0x00, 0xf8, 0xe8, 0xfc, 0xf4, 0xfe, 0xf4, 0xfe,
	0xf4, 0xfe, 0xb4, 0xfe, 0x68, 0xfc, 0x00, 0xf8, 0xf0, 0xf8, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4e, 0x06, 0xff, 0x58, 0xff, 0x5e, 0xff, 0x3d, 0xff, 0x3b, 0xff,
	0x37, 0xff, 0x37, 0xff, 0x38, 0xff, 0x16, 0xff, 0x0c, 0x7f, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00,

// FRAME 06
	0x00, 0x00, 0x00, 0x30, 0x30, 0x78, 0x78, 0xfc, 0x0c, 0xfe, 0xf6, 0xff, 0xee, 0xff, 0x0e, 0xff,
	0xb6, 0xff, 0xda, 0xff, 0x1c, 0xfe, 0xcc, 0xfe, 0x80, 0xdc, 0x00, 0xd8, 0x00, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x18, 0xff, 0x5d, 0xff, 0x43, 0xff, 0x58, 0xff,
	0x5b, 0xff, 0x03, 0xff, 0x3b, 0xff, 0x01, 0xff, 0x00, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 07
	0x00, 0x00, 0x00, 0x38, 0x38, 0xfc, 0xf8, 0xfc, 0x1c, 0xfe, 0xec, 0xfe, 0xdc, 0xfe, 0x1c, 0xfe,
	0x6c, 0xfe, 0xb4, 0xfe, 0x38, 0xfc, 0x98, 0xfc, 0x00, 0xb8, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x80, 0x00, 0xf0, 0x70, 0xf9, 0x40, 0xff, 0x1b, 0xff, 0x3b, 0xff, 0x20, 0xff,
	0x5b, 0xff, 0x5b, 0xff, 0x42, 0xff, 0x43, 0xe7, 0x01, 0xc3, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM tileset[] =
{
// width, height,
	16, 16,
// TILE 00
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
// TILE 01
	0x00, 0xfe, 0xfe, 0x06, 0xf6, 0xf6, 0xf6, 0xe6, 0x16, 0x36, 0x76, 0xf6, 0xf6, 0xf6, 0xf6, 0xe6,
	0x00, 0xff, 0xff, 0x00, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee,
// TILE 02
	0x16, 0x36, 0x76, 0xf6, 0xf6, 0xf6, 0xf6, 0xe6, 0x16, 0x36, 0x76, 0xf6, 0xf6, 0xf6, 0xf6, 0xe6,
	0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee,
// TILE 03
	0x16, 0x36, 0x76, 0xf6, 0xf6, 0xf6, 0xf6, 0xe6, 0x16, 0x36, 0x76, 0xf6, 0x06, 0xfe, 0xfe, 0x00,
	0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0x00, 0xff, 0xff, 0x00,
// TILE 04
	0x00, 0xff, 0xff, 0x00, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee,
	0x00, 0xff, 0xff, 0x00, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee,
// TILE 05
	0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee,
	0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee,
// TILE 06
	0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0x00, 0xff, 0xff, 0x00,
	0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0x00, 0xff, 0xff, 0x00,
// TILE 07
	0x00, 0xff, 0xff, 0x00, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee,
	0x00, 0x7f, 0x7f, 0x60, 0x6d, 0x69, 0x61, 0x6e, 0x6f, 0x6f, 0x6f, 0x6e, 0x6d, 0x69, 0x61, 0x6e,
// TILE 08
	0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee,
	0x6f, 0x6f, 0x6f, 0x6e, 0x6d, 0x69, 0x61, 0x6e, 0x6f, 0x6f, 0x6f, 0x6e, 0x6d, 0x69, 0x61, 0x6e,
// TILE 09
	0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0x00, 0xff, 0xff, 0x00,
	0x6f, 0x6f, 0x6f, 0x6e, 0x6d, 0x69, 0x61, 0x6e, 0x6f, 0x6f, 0x6f, 0x6e, 0x60, 0x7f, 0x7f, 0x00,
// TILE 10
	0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee,
	0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0x0d, 0xe9, 0xe1, 0x6e,
// TILE 11
	0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee,
	0x6f, 0xef, 0xef, 0x0e, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee,
// TILE 12
	0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xf0, 0xf7, 0xf7, 0xe6,
	0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee,
// TILE 13
	0x16, 0x37, 0x77, 0xf0, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee,
	0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee, 0x1f, 0x3f, 0x7f, 0xfe, 0xfd, 0xf9, 0xf1, 0xee,
};

#endif
