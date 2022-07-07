#include "main.h"

/**
 * more_numbers -> print 10 times numbers, from 0 to 14
 *
 * Return: Always succes.
 */

void more_numbers(void)
{
	int m, n;

	for (n = 0; n <= 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			_putchar(m + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
