#include <mICE/color.h>
#include <mICE/screen.h>

#ifdef _WIN32
// https://github.com/wmcbrine/PDCurses/blob/master/docs/README.md
#include <pdcurses/curses.h>
#else
// Use ncurses
#endif

int initScreenColor() {
	initScreen();
	if (has_colors()) {
		start_color();
	} else {
		return 0;
	}

	for (int i = 0, bg = COLOR_BLACK; bg <= COLOR_WHITE; ++bg) {
		for (int fg = COLOR_BLACK; fg <= COLOR_WHITE; ++i, ++fg) {
			init_pair(i, fg, bg);
		}
	}
	return 1;
}

void setColor(int fg, int bg) {
	attron(COLOR_PAIR(bg * (COLOR_WHITE + 1) + fg));
}

void defineColor(int color, int r, int g, int b) {
	init_color(color, r, g, b);
}

void clearColor() {
	setColor(COLOR_WHITE, COLOR_BLACK);
}