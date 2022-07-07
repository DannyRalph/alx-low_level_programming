#include "main.h"

/**
 * print_square - prints a square
 * @size: integer parameter
 */
void print_square(int size)
{
	int m, n;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m <= size; m++)
		{
		for (n = 0; n < size; n++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	}
}
