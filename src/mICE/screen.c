#include <mICE/screen.h>
#include <stdarg.h>
#include <stdlib.h>

#ifdef _WIN32
// https://github.com/wmcbrine/PDCurses/blob/master/docs/README.md
#include <pdcurses/curses.h>
#else
// Use ncurses
#endif

void initScreen() {
	initscr();
	noecho();
}

void closeScreen() {
	endwin();
}

void clearScreen() {
	clear();
}

void refreshScreen() {
	refresh();
}

int screenWidth() {
	return COLS;
}

int screenHeight() {
	return LINES;
}

int setScreenSize(int width, int height) {
	resize_term(height, width);
}

void setCursor(int cursor) {
	curs_set(cursor);
}

void moveCursor(int x, int y) {
	move(y, x);
}

int getKey() {
	return getch();
}

int getcat(int x, int y) {
	return (mvinch(y, x) & A_CHARTEXT);
}

void flashScreen() {
	flash();
}

void printc(char c) {
	addch(c);
}

void printcat(int x, int y, char c) {
	mvaddch(y, x, c);
}

void prints(const char* s) {
	addstr(s);
}

void printsat(int x, int y, const char* s) {
	mvaddstr(y, x, s);
}

void printsf(const char* fmt, ...) {
	va_list args;
	va_start(args, fmt);
	char* output = (char*)malloc(screenWidth());
	vsprintf_s(output, screenWidth(), fmt, args);
	printw(output);
	free(output);
	va_end(args);
}

void printsfat(int x, int y, const char* fmt, ...) {
	va_list args;
	va_start(args, fmt);
	char* output = (char*)malloc(screenWidth());
	vsprintf_s(output, screenWidth(), fmt, args);
	mvprintw(y, x, output);
	free(output);
	va_end(args);
}