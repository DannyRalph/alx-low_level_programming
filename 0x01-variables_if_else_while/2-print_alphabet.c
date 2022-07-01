#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry point
 * Description: print alphabet in lowercase
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
