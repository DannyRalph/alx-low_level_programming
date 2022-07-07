#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: Always success
 */
void print_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		_putchar(m + '0');
	}
	_putchar('\n');
}
