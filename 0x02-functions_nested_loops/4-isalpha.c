#include "main.h"
#include <ctype.h>

/**
 * _isalpha - short description, using a line
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _isalpha(int c)

{

	if (isalpha(c))
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
