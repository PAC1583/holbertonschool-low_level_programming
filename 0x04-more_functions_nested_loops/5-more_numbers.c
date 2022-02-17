#include "main.h"

/**
 * more_numbers - prints x10 the numbers, from 0 to 14, followed by a new line.
 * @: none
 * Return: none
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 15; i++)
	{

		for (j = 48; j < 58; j++)
		{
			_putchar(j);
		}
		for (j = 48; j < 53; j++)
		{
			_putchar(49);
			_putchar(j);
		}
		_putchar('\n');
	}
}
