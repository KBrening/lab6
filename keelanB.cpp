//Author: Keelan Brening

#include "fonts.h"

void showName(int y, int x) {
	Rect r;
	r.bot = y;
	r.left = x;
	r.center = 0;
	ggprint16(&r, 16, 0x00ffff00, "Keelan Brening");
}

void drawbox() {

}
