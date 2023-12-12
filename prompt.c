#include "libs.h"
/**
 * prompt - prints a prompt to the console
 * return: void
 */
void prompt(void)
{
	if (isatty(0))
		write(1, "$ ", 2);
}
