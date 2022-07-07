#include "main.h"

/**
 * more_numbers -> print more numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	char m, n;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (m = 0; m <= 14; m++)
		{
			n = m;
			if (m > 9)
			{
				_putchar('1');
				n = m % 10;
			}
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
