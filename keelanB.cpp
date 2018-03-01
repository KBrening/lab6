//Author: Keelan Brening

#include "fonts.h"
#include <GL/glx.h>

void showName(int y, int x, int z) {
	Rect r;
	r.bot = y;
	r.left = x;
	r.center = 0;
	ggprint8b(&r, 16, 0x00ffff00, "Keelan Brening");
}

void drawbox(int x, int y) {
	static float angle = 0.0;
    	
	glColor3ub(255,0,0);
	glPushMatrix();
	glTranslatef(x , y, 0.0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glTranslatef(-50.0 , -50.0, 0.0);
	angle = angle + 2.5;
	glBegin(GL_QUADS);
    		glVertex2i( 0, 0);
    		glVertex2i( 0, 100);
    		glVertex2i( 100, 100);
    		glVertex2i( 100, 0);
	glEnd();
	showName(50, 10, 1);
	glPopMatrix();
}

