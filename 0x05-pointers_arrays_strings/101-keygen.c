#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main entry point
 *
 * Return: Always Success
 */

int main(void)
{
	int num;

	srand(time(0));
	num = rand();
	printf("%i\n", num);
	return (0);
}
