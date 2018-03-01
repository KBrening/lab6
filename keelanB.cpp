//Author: Keelan Brening

#include "fonts.h"

void showName() {
	Rect r;
	r.bot = 750;
	r.left = 500;
	r.center = 0;
	ggprint8b(&r, 16, 0x00ffff00, "Keelan Brening");
}
