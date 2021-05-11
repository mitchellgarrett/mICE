#include <mICE/mICE.h>
#include <pdcurses/curses.h>

int main(int argc, char* argv[]) {

	initScreenColor();
	setCursor(0);
	
	setColor(CYAN, BLUE);

	fillBackground(L'░');
	printc(ACS_CKBOARD);
	printc('#');
	drawBoxFill(1, 1, 5, 5, ACS_CKBOARD);
	printc(182 | A_ALTCHARSET);
	//addwstr
	//addchstr(ACS_CKBOARD);
	//mvaddchstr(0, 0, "%d", ACS_CKBOARD);
	//printsfat(0, 0, "%c", ACS_CKBOARD);

	// Width = 3/2 * Height
	// Aspect ratio = 3:2
	printsat(10, 10, L"######");
	printsat(10, 11, L"######");
	printsat(10, 12, L"######");
	printsat(10, 13, L"######");

	while (getKey() != 'q');

	closeScreen();

	return 0;
}