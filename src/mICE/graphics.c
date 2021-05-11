#include <mICE/graphics.h>
#include <mICE/screen.h>
#include <stdlib.h>

// Bresenham's line drawing algorithm
void drawLine(int xi, int yi, int xf, int yf, char c) {
	int dx = abs(xf - xi);
	int sx = xi < xf ? 1 : -1;

	int dy = -abs(yf - yi);
	int sy = yi < yf ? 1 : -1;

	int e = dx + dy;
	int e2;
	int x = xi;
	int y = yi;
	while (1) {
		printcat(x, y, c);
		if (x == xf && y == yf) break;
		e2 = 2 * e;
		if (e2 >= dy) {
			e += dy;
			x += sx;
		}
		if (e2 <= dx) {
			e += dx;
			y += sy;
		}
	}
}

void drawLineHorizontal(int y, int xi, int xf, char c) {
	int x = xi;
	int dx = xi < xf ? 1 : -1;
	xf += dx;
	while (x != xf) {
		printcat(x, y, c);
		x += dx;
	}
}

void drawLineVertical(int x, int yi, int yf, char c) {
	int y = yi;
	int dy = yi < yf ? 1 : -1;
	yf += dy;
	while (y != yf) {
		printcat(x, y, c);
		y += dy;
	}
}

void fillBackground(char c) {
	drawBoxFill(0, 0, screenWidth(), screenHeight(), c);
}

void drawBox(int x, int y, int width, int height, char c) {
	int xf = x + width - 1;
	int yf = y + height - 1;
	drawLineHorizontal(y, x, xf, c);
	drawLineHorizontal(yf, x, xf, c);
	drawLineVertical(x, y, yf, c);
	drawLineVertical(xf, y, yf, c);
}

void drawBoxFill(int x, int y, int width, int height, char c) {
	char* line = (char*)malloc(width);
	memset(line, c, width);
	int yf = y + height;
	for (; y < yf; ++y) {
		printsat(x, y, line);
	}
	free(line);
}

void drawBoxFillBorder(int x, int y, int width, int height, char border, char fill) {
	drawBox(x, y, width, height, border);
	drawBoxFill(x + 1, y + 1, width - 2, height - 2, fill);
}

// TODO
void drawCircle(int x, int y, int r, char c) {
	int cx = 0;
	int cy = r;
	int d = 3 - 2 * r;

	printcat(x + cx, y + cy, c);
	printcat(x - cx, y + cy, c);
	printcat(x + cx, y - cy, c);
	printcat(x - cx, y - cy, c);
	printcat(x + cy, y + cx, c);
	printcat(x - cy, y + cx, c);
	printcat(x + cy, y - cx, c);
	printcat(x - cy, y - cx, c);

	while (y >= x) {
		x++;
		if (d > 0) {
			y--;
			d = d + 4 * (x - y) + 10;
		} else {
			d = d + 4 * x + 6;
		}

		printcat(x + cx, y + cy, c);
		printcat(x - cx, y + cy, c);
		printcat(x + cx, y - cy, c);
		printcat(x - cx, y - cy, c);
		printcat(x + cy, y + cx, c);
		printcat(x - cy, y + cx, c);
		printcat(x + cy, y - cx, c);
		printcat(x - cy, y - cx, c);
	}

}

// TODO
void drawCircleFill(int x, int y, int r, char c) {

}

void drawCircleFillBorder(int x, int y, int r, char border, char fill) {
	drawCircle(x, y, r, border);
	drawCircleFill(x, y, r - 1, fill);
}