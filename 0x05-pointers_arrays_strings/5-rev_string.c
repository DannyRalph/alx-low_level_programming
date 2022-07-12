#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int a, b;
	char c;

	a = 0;
	while (*(s + a) != '\0')
		a++;
	a--;
	for (b = 0; b < a; b++)
	{
		c = *(s + a);
		*(s + a) = *(s + b);
		*(s + b) = c;
		a--;

	}
}
