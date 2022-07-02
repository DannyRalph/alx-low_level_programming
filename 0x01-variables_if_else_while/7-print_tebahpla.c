#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry point
 * Return: Always 0 (Succes/correct)
 */
int main(void)
{

	char alphabet;

	alphabet = 'z';

	while (alphabet >= 'a')
	{

		putchar(alphabet);

		alphabet--;
	}

	putchar('\n');

	return (0);
}
