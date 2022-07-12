#include "main.h"

/**
 * print_rev - prints string in reverse order
 * @s: string to be reversed
 * Return: void
 */

void print_rev(char *s)
{
	int a;

	a = 0;
	while (*(s + a) != '\0')
		a++;
	a--;
	for (; a >= 0; a--)
		_putchar(*(s + a));
	_putchar('\n');
}
