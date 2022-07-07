#include "main.h"
/**
 * times_table - print the multiples of 9
 *
 * Return: void
 */
void times_table(void)
{
	int a, i, g;

	for (a = 0; a <= 9; a++)
	{
		for (i = 0; i <= 9; i++)
		{
			g = a * i;
			if ((g / 10) == 0)
			{
				if (i == 0)
				{
					_putchar ('0');
				}
				if (i != 0)
				{
					_putchar(' ');
					_putchar((a % 10) + '0');
				}
				if (i < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((g / 10) + '0');
				_putchar((g % 10) + '0');
				if (i < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}

}
