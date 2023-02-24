#include <main.h>
/**
 * _isupper - Check if letter is upper
 * @x: the number to be checked
 * Return: 1 for upper letter or 0 for any else 
 */
int _isupper(int x)
{
	if (x >= 'A' && x <= 'z')
	{
	return(1);
	}
	return(0);
