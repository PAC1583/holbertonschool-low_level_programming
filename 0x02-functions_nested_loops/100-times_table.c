#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - return last digit a num
 * @n: n integer
 *
 * Return: last digit of a num.
*/

int print_last_digit(int n)
{
	int lastD;

	lastD = (n % 10);
	_putchar(lastD + '0');
	return (lastD);
}

/**
 * print_num - prints a number
 * @n: n integer
 *
 * Return: last digit of a num.
*/

void print_num(int n)
{
	int m;

	if (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		m = n / 10;
		_putchar(m + '0');
		print_last_digit(n);
	}
	else
	{
		_putchar(1 + '0');
		m = n / 10;
		print_last_digit(m);
		print_last_digit(n);
	}
}
/**
 * print_char - print n times a char
 * @n: n integer
 * @m: m integer
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
 * times_table2 - return times table
 * @size: size of the time table, int
 *
 * Return: print times table 0-9.
*/

void times_table2(int size)
{
	int n, i, j = 0;

	for (i = 0; i < size + 1; i++)
	{
		for (j = 0; j < size + 1; j++)
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
					print_num(n);
				}
			}
			else if (n > 9)
			{
				if (n < 100)
				{
					print_char(32, 2);
					print_num(n);
				}
				else
				{
					print_char(32, 1);
					print_num(n);
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

/**
 * print_times_table - return times table
 * @n: number of the time table, int
 *
 * Return: print times table 0-9.
*/

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
