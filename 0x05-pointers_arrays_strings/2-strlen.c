#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: a string
 */
int _strlen(char *s)
{
	int indx;

	for (indx = 0; s[indx] != '\0'; indx++)
		;
	return (indx);
}
