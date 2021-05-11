// An example testing the color features of mICE
/*#include <mICE/mICE.h>

int main(int argc, char* argv[]) {

	// Set up screen with color, returns 0 if terminal does not support color
	if (!initScreenColor()) {
		return -1;
	}
	setCursor(0);

	clearScreen();
	clearColor(); // Reset current color pair
	
	setColor(RED, GREEN);
	fillBackground(' ');

	printsat(0, screenHeight() / 2, "Here is a color terminal");
	printsfat(0, screenHeight() - 2, "You have access to %d colors and %d color pairs", numColors(), numColorPairs());
	printsat(0, screenHeight() - 1, "8 colors and 64 color pairs are already defined");

	while (getKey() != 'q');
	closeScreen();

	return 0;
}*/