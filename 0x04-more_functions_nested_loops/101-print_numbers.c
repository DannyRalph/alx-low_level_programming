#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer parameter
 * Return: void
 */
void print_number(int n)
{
	unsigned int a;

	a = n;

	if (n < 0)
	{
		_puchar(45);
		a = -n;
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '10');
}
