#ifndef M_ICE_SCREEN
#define M_ICE_SCREEN

void initScreen();
void closeScreen();
void clearScreen();
void refreshScreen();

int screenWidth();
int screenHeight();
int setScreenSize(int width, int height);

void setCursor(int cursor);
void moveCursor(int x, int y);

int getKey();
int getcat(int x, int y);
void flashScreen();

void printc(char c);
void printcat(int x, int y, char c);

void prints(const char* s);
void printsat(int x, int y, const char* s);

void printsf(const char* fmt, ...);
void printsfat(int x, int y, const char* fmt, ...);

#endif
