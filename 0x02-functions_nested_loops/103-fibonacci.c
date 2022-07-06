#include <stdio.h>
/**
 * main - print even number
 * Description: print even number < 4,000,000
 * 5 below 1024 (excluded)
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, n = 0;
	int sum = 0;

	while (n < 4000000)
	{
		n = a + b;
		a = b;
		b = n;
		if (n % 2 == 0)
			sum += n;
	}
	printf("%i\n", sum);
	return (0);
0
