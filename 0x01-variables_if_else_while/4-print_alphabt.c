#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry point
 * Return: Always 0 (Success/correct)
 */
int main(void)
{

	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{

		if (alphabet != 'e' && alphabet != 'q')
		{

			putchar(alphabet);
		}

		alphabet++;
	}

	putchar('\n');

	return (0);
}
