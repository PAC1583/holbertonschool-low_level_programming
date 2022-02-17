#include "main.h"

/**
 * _isdigit - return if c is a digit or not
 * @c: c integer
 * Return: 1 if is digit or 0 if not
 */

int _isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
