#include "main.h"

/**
 * print_square - prints a square
 * @size: integer parameter
 */
void print_square(int size)
{
	int m;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m < size; m++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
