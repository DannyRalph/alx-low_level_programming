#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in a row
 *
 * Return Always 0.
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int num;


	for (num = 0; num < 10; num++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		_putchar('\n');
	}


}
