#include "main.h"
#include <ctype.h>
/**
 * _islower - check for lowercase character
 *@c : contains value to be compared
 * Return: Always 0.
 */
int _islower(int c)

{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
