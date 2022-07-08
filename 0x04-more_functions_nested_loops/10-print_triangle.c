#include

/**
 * print_triangle - print a triangle
 * @size: integer type
 * Return: void
 */

void print_triangle(int size)
{
	int i, m;

	for (i = 1; (i <= size && size > 0); i++)
	{
		for (m = 0; (m < size - i); m++)
		{
			_putchar(' ');
		}
		for (m = 0; (m < i); m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (i == 1)
		_putchar('\n');
}
