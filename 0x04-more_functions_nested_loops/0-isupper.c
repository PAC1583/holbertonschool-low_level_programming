#include <stdio.h>
#include "main.h"

/**
 * _isupper - return if the int is upper or not
 * @c: c integer
 * Return: 1 if is upper or 0 if not
 */

int _isupper(int c)
{
	if (c < 65 || c > 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
