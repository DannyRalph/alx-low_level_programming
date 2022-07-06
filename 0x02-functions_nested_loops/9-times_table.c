#include "main.h"
/**
 * times_table - prints time tables of 9
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a, i, g;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (i = 0; i <= 9; i++)
		{
			g = (a * 1);
			if ((g / 10) > 0)
			{
				_putchar((g / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((g % 10) + '0');
			if (i < 9)
			{
				_putchar(' ');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
