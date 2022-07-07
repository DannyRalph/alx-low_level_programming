#include "main.h"

/**
 * print_line - draws a staright line
 * @n: integer parameter
 * Return: success
 */
void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
