#include <mICE/mICE.h>

int main(int argc, char* argv[]) {

	initScreen();
	setCursor(0);

	//drawLine(0, 0, screenWidth() - 1, screenHeight() - 1, '+');
	//drawLineHorizontal(0, 0, screenWidth() - 1, '#');
	//drawLineVertical(0, 0, screenHeight() - 1, '#');
	//drawBox(0, 0, 5, 5, '@');
	//drawBoxFill(1, 1, 3, 3, '+');
	drawCircle(10, 10, 5, '+');
	while (getKey() != 'q');

	closeScreen();

	return 0;
}