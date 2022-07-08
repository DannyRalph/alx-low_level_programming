#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns the largest of 3
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > c && a > b)
	{
		largest = a;
		printf("%d", largest);
	}
	else if (b > c && b > a)
	{
		largest = b;
		printf("%d", largest);
	}

	return (largest);
}
