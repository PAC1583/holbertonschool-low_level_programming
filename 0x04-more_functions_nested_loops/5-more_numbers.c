#include "main.h"

/**
 * more_numbers - prints x10 the numbers, from 0 to 14, followed by a new line.
 * @: none
 * Return: none
 */

void more_numbers(void)
{
	int i, j;
	int k = 0;
	int num[10]={ 48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(num[k]);
			k += 1;
			if (j > 8)
				{	
					if (j == 9)
					{
						k = 0;
					}
					if (j != 14)
					{
						_putchar(num[1]);
					}
				}
		}
		k = 0;
		_putchar('\n');
	}
}
