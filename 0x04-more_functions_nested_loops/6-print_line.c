#include "main.h"

/**
 * print_line - draws a straight line
 * @n: integer parameter
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m < n; m++)
			_putchar(95);
		_putchar('\n');
	}
}
