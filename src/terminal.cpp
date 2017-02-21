#include "terminal.h"
#include "std.h"


#define GRID_POSITION(x,y) ((SCREEN_SIZE_WIDTH*y)+x)


Node_t* vd_out = (Node_t*)0xb8000;

unsigned int x = 0;
unsigned int y = 0;

void clear ()
{
	Color clear_color = GetColor (BLACK, WHITE);
	for (unsigned int i = 0; i < SCREEN_SIZE; i++)
	{
		Node_t* node = &vd_out[i];
		node->character = ' ';
		node->color = clear_color;
	}
}

void clear_color (char clear_color)
{
	for (unsigned int i = 0; i < SCREEN_SIZE; i++)
	{
		Node_t* node = &vd_out[i];
		node->character = ' ';
		node->color.background = clear_color;
	}
}

void SetCursorPosition (unsigned int _x, unsigned int _y)
{
	x = _x;
	y = _y;
}

void put (char* text)
{
	unsigned int str_size = strlen(text);
	unsigned int start_grid_pos = GRID_POSITION(x, y);
	for (unsigned int i = 0; i < str_size; i++)
	{
		char c = text[i];
		
		Node_t* node = &vd_out[start_grid_pos+i];
		node->character = c;
	}
	x += str_size;
}

void println (char* text)
{
	put (text);
	y++;
	x = 0;
}
