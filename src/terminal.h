#pragma once

#include "color.h"

#define SCREEN_SIZE_WIDTH 80
#define SCREEN_SIZE_HEIGHT 25

#define SCREEN_SIZE SCREEN_SIZE_WIDTH * SCREEN_SIZE_HEIGHT
#define SCREEN_DATA_SIZE = SCREEN_SIZE_WIDTH * SCREEN_SIZE_HEIGHT * 2

typedef struct
{
	char character;
	Color color;
} Node_t;

extern Node_t* vd_out;

void SetCursorPosition (unsigned int x, unsigned int y);

void clear ();
void clear_color (char clear_color);

void print (char* text);
void println (char* text);
