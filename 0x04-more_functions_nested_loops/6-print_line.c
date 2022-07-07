#include "main.h"

/**
 * print_line - prints a line
 * @n: variable
 *
 * Return: 0
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m <= n; m++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
