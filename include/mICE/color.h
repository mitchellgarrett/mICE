#ifndef M_ICE_COLOR
#define M_ICE_COLOR

typedef enum COLOR { BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, YELLOW, WHITE };

int initScreenColor();
void setColor(int fg, int bg);
void defineColor(int color, int r, int g, int b);
void clearColor();

#endif
