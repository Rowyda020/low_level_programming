#include "main.h"

/**
 * _strlen -  Function that returns the length of a string
 * @s: this is the input string
 * Return: Lenngth of the string
 */
int _strlen(char *s)
{
	int indx;

	for (indx = 0; s[indx] != '\0'; indx++)
		;
	return (indx);
}
