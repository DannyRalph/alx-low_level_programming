#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 and don't print 2 and 4
 *
 * Return: Always success.
 */
void print_most_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		if (m != 2 && m != 4)
		{
			_putchar(m + '0');
		}
	}
	_putchar('\n');
}
