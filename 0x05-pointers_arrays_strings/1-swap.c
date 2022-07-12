#include "main.h"

/**
 * swap_int - swaps the values of two integer
 * @a: integer parameter
 * @b: integer parameter
 * Return: Always successs
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
