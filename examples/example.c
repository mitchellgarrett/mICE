// An example testing the basic features of mICE
/*#include <mICE/mICE.h>

int main(int argc, char* argv[]) {

	initScreen(); // Set up screen
	setCursor(0); // Remove cursor

	clearScreen(); // Clear screen
	refreshScreen(); // Refresh screen
	
	printsfat(0, screenHeight() - 1, "Welcome to mICE version %d!", M_ICE_VERSION); // Print formatted string at given coordinates

	int input;
	int x = 0;
	int y = 0;

	int previous = getcat(x, y); // Get character on screen
	printcat(x, y, '@'); // Print character at
	while ((input = getKey()) != 'q') { // Get key press
		printcat(x, y, previous);
		switch (input) {
			case 'w': y--; break;
			case 's': y++; break;
			case 'd': x++; break;
			case 'a': x--; break;
		}
		previous = getcat(x, y);
		printcat(x, y, '@');
	}

	closeScreen(); // Close screen

	return 0;
}*/