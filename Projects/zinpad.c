#include <stdio.h>
#include <ctype.h>
#include <termios.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - A simple text editor in C
 * Return: 0
 */

/* defining the struct */
struct termios orig_termios;

/* function to disable RawMode at exit */
void disableRawMode()
{
	tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios);
}

/* function to turn off echo */
void enableRawMode()
{

	struct termios raw = orig_termios;

	tcgetattr(STDIN_FILENO, &orig_termios);
	/* to exit Raw_Mode )*/
	atexit(disableRawMode);
	/* turn off echo and ConicalMode */
	raw.c_lflag &= ~(ECHO | ICANON);

	tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

int main(void)
{
	enableRawMode();

	char c;
	/* Reading key presses from the user & quiting the program using 'q'*/
	while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q');
	{
		/*display keypresses */

	return 0;
}
