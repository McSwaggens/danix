#include "color.h"

Color current_color;

Color GetColor (unsigned char background, unsigned char foreground)
{
	Color color;
	color.background = background;
	color.foreground = foreground;
	
	return color;
}

void SetColor (Color color_set)
{
	current_color = color_set;
}

void SetForeColor (unsigned char foreground)
{
	current_color.foreground = foreground;
}

void SetBackColor (unsigned char background)
{
	current_color.background = background;
}
