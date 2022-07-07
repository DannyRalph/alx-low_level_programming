#include "main.h"

/**
 * more_numbers -> print more numbers
 */

void more_numbers(void)
{
	int m, n;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			_putchar(m + '0');
		}
		_putchar('\n');
	}
}
