#include <mICE/mICE.h>
#include <pdcurses/curses.h>

int main(int argc, char* argv[]) {
	
	//initScreen();
	initScreenColor();
	//setCursor(0);
	
	//clearScreen();
	//refreshScreen();
	clearColor();
	printc('k');
	printsfat(10, 10, "%s %d %d %d\n", "hey", screenWidth(), screenHeight(), 8);
	
	//refreshScreen();
	int input;
	while ((input = getKey()) != 'q') {
		//printcat(10, 10, input);
		//moveCursor(10, 10);
	}

	closeScreen();

	return 0;
}