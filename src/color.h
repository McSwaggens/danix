#pragma once

#define BLACK 0x0
#define BLUE 0x1
#define GREEN 0x2
#define CYAN 0x3
#define RED 0x4
#define MAGENTA 0x5
#define BROWN 0x6
#define LGREY 0x7
#define GREY 0x8
#define LBLUE 0x9
#define LGREEN 0xA
#define LCYAN 0xB
#define LRED 0xC
#define LMAGENTA 0xD
#define LBROWN 0xE
#define WHITE 0xF

typedef struct
{
	unsigned char foreground : 4;
	unsigned char background : 4;
} Color;

extern Color current_color;

Color GetColor (unsigned char background, unsigned char foreground);
void SetColor (Color color_set);
void SetForeColor (unsigned char foreground);
void SetBackColor (unsigned char background);
