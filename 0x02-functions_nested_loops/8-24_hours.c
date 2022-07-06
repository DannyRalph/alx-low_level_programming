#include "main.h"

/**
 * jack_bauer - helps print every minutes of the say
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int time;
	int day;

	for (time = 0; time <= 23; time++)
	{
	for (day = 0; day <= 59; day++)
	{
	_putchar(time / 10 + '0');
_putchar(time % 10 + '0');
_putchar(':');
_putchar(day / 10 + '0');
_putchar(day % 10 + '0');
_putchar('\n');

	}


	}

}
