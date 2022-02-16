#include "main.h"

/**
 * _abs - return absolute value of a num
 * @n: n integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
	{
		return (n);
	}
}

/**
 * print_last_digit - return last digit a num
 * @n: n integer
 *
 * Return: last digit of a num.
*/

int print_last_digit(int n)
{
	int lastD;

	lastD = _abs(n % 10);
	_putchar(lastD + '0');
	return (lastD);
}

/**
 * print_char - print n times a char
 * @n: n integer
 *
 * Return: None.
*/

void print_char(int m, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(m);
	}
}

/**
 * times_table - return times table
 * @size: size of the time table, int
 *
 * Return: print times table 0-9.
*/

void times_table2(int size)
{
	int n, m = 0;
	int i, j;

	for (i = 0; i < size+1; i++)
	{
		for (j = 0; j < size+1; j++)
		{
			n = i * j;
			if (n < 10)
			{
				if (j == 0)
				{
					_putchar(48);
				}
				else
				{
					print_char(32, 3);
					_putchar(n + '0');
				}
				
			}
			else if (n > 9 )
			{
				if (n < 100)
				{
					print_char(32, 2);
					m = n / 10;
					_putchar(m + '0');
					print_last_digit(n);
				}
				else
				{
					print_char(32, 1);
					_putchar(1 + '0');
					m = n / 10;
					print_last_digit(m);
					print_last_digit(n);
					
				}
			}
			if (j < size)
			{
				print_char(44, 1);
			}
		}
		_putchar('\n');
	}
}

void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
	}
	else 
	{
		times_table2(n);
	}
}