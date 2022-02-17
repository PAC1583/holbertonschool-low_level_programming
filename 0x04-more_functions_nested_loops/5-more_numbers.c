#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14, followed by a new line.
 * @: none
 * Return: none
 */

void more_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	};
}



/**
 * more_numbers - prints x10 the numbers, from 0 to 14, followed by a new line.
 * @: none
 * Return: none
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		print_numbers();
		for (j = 48; j < 53; j++)
		{
			_putchar(49);
			_putchar(j);
		}
		_putchar('\n');
	}
}
