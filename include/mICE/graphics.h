#ifndef M_ICE_GRAPHCS
#define M_ICE_GRAPHICS

void drawLine(int xi, int yi, int xf, int yf, char c);
void drawLineHorizontal(int y, int xi, int xf, char c);
void drawLineVertical(int x, int yi, int yf, char c);

void fillBackground(char c);
void drawBox(int x, int y, int width, int height, char c);
void drawBoxFill(int x, int y, int width, int height, char c);
void drawBoxFillBorder(int x, int y, int width, int height, char border, char fill);

void drawCircle(int x, int y, int r, char c);
void drawCircleFill(int x, int y, int r, char c);
void drawCircleFillBorder(int x, int y, int r, char border, char fill);

#endif
