#include <stdio.h>
/**
 * main -entry point
 * Return: Always 0 (Success/correct)
 */
int main(void)
{

	int n;

	n = 48;

	while (n <= 57)
	{
		n++;

		putchar(n);

		if (n == 57)
		{
			break;
		}

		putchar(',');

		putchar(' ');
	}

	putchar('\n');

	return (0);
}
