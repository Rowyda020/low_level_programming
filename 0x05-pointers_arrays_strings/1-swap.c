#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: the first entry
 * @b: the second entry
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
