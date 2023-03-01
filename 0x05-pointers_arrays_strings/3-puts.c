#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: input string
 */
void _puts(char *str)
{
	int indx;

	for (indx = 0; indx != '\0'; indx++)
	{
		_putchar(str[indx]);
	}
	_putchar('\n');
}
