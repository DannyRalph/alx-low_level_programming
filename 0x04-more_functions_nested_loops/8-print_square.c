#include "main.h"

/**
 * print_square - print a square
 * @size: integer parameter
 */
void print_square(int size)
{
	int m, n;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{

			for (n = 0; n < size; n++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
