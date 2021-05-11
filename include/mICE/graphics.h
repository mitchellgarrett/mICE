#ifndef M_ICE_GRAPHCS
#define M_ICE_GRAPHICS

void drawLine(int xi, int yi, int xf, int yf, char c);
void drawLineHorizontal(int y, int xi, int xf, char c);
void drawLineVertical(int x, int yi, int yf, char c);

void fillBackground(char c);
void drawBox(int xi, int yi, int xf, int yf, char c);
void drawBoxFill(int xi, int yi, int xf, int yf, char c);

void drawCircle(int cx, int cy, int r, char c);
void drawCircleFill(int cx, int cy, int r, char c);

#endif
