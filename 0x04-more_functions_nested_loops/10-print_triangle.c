#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: integerparameter
 * Return: Always 0.
 */

void print_triangle(int size)

{
	int m;
	int n;
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		a = size 1;
		for (m = 0; m < size; m++)
		{
			for (n = a; n > 0 n--)
			{
				_putchar(' ');
			}
			for (b = 0; b <= m; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
