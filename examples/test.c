#include <mICE/mICE.h>

int main(int argc, char* argv[]) {

	initScreen();
	setCursor(0);

	// Width = 3/2 * Height
	// Aspect ratio = 3:2
	printsat(10, 10, "######");
	printsat(10, 11, "######");
	printsat(10, 12, "######");
	printsat(10, 13, "######");

	while (getKey() != 'q');

	closeScreen();

	return 0;
}