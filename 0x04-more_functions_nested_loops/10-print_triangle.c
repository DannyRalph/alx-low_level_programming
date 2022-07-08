#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: print size
 * Return: Always 0.
 */

void print_triangle(int size)

{


	int a;
	int b;
	int c;
	int d;


	if (size > 0)
	{
		c = size - 1;
	for (a = 0; a < size; a++)
	{
		for (b = c; b > 0; b--)
		{
			_putchar(' ');
		}

		for (d = 0; d <= a; d++)
		{
			_putchar(35);
		}
		_putchar('\n');


	}

	}
	else
	{
		putchar('\n');
	}
}
