#include <stdio.h>
/**
 * main -entry point
 *
 * Return: void
 */

int main(void)
{
	int m = 100;
	int n;

	for (n = 1; n <= m; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
		{
			if (n < m)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}