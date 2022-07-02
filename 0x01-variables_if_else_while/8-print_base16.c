#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry point
 * Return: Always 0 (Succes/correct)
 */
int main(void)
{

	char base16;

	base16 = 48;

	while (base16 <= 57)
	{

		putchar(base16);

		base16++;
	}

	base16 = 97;

	while (base16 <= 102)
	{

		putchar(base16);

		base16++;
	}

	putchar('\n');

	return (0);
}
