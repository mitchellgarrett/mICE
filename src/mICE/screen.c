#include <mICE/screen.h>
#include <stdarg.h>
#include <stdlib.h>

#ifdef _WIN32
#define PDC_WIDE
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

void printc(unsigned long c) {
	addrawch(c);
}

void printcat(int x, int y, unsigned long c) {
	mvaddrawch(y, x, c);
}

void prints(const unsigned long* s) {
	addwstr(s);
}

void printsat(int x, int y, const unsigned long* s) {
	mvaddwstr(y, x, s);
}

void printsf(const unsigned long* fmt, ...) {
	va_list args;
	va_start(args, fmt);
	unsigned long* output = (unsigned long*)malloc(screenWidth() * sizeof(unsigned long));
	vsprintf_s(output, screenWidth(), fmt, args);
	prints(output);
	free(output);
	va_end(args);
}

void printsfat(int x, int y, const unsigned long* fmt, ...) {
	va_list args;
	va_start(args, fmt);
	unsigned long* output = (unsigned long*)malloc(screenWidth() * sizeof(unsigned long));
	vsprintf_s(output, screenWidth(), fmt, args);
	printsat(x, y, output);
	free(output);
	va_end(args);
}