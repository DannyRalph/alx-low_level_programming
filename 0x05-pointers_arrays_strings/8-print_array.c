#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of array of integers
 * @a: int type array pointer
 * @n: integer parameter
 *
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}
