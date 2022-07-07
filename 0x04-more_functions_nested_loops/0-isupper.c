#include "danny.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: carrier of the integer variable
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
