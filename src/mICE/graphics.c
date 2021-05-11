#include <mICE/graphics.h>
#include <mICE/screen.h>
#include <stdlib.h>

void drawLine(int startx, int starty, int endx, int endy, char c) {

}

void drawLineHorizontal(int y, int xi, int xf, char c) {

}

void drawLineVertical(int x, int yi, int yf, char c) {

}

void fillBackground(char c) {
	char* line = (char*)malloc(screenWidth());
	memset(line, c, screenWidth());
	for (int y = 0; y < screenHeight(); ++y) {
		printsat(0, y, line);
	}
	free(line);
}

void drawBox(int xi, int yi, int xf, int yf, char c) {

}

void drawBoxFill(int xi, int yi, int xf, int yf, char c) {

}

void drawCircle(int cx, int cy, int r, char c) {

}

void drawCircleFill(int cx, int cy, int r, char c) {

}