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
 * times_table - return times table
 * @: void
 *
 * Return: print times table 0-9.
*/

void times_table(void)
{
int n, m = 0;
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
n = i * j;
if (n < 10)
{
if(j !=0)
{
_putchar(32);
}
_putchar('0' + n);
}
else
{
m = n / 10;
_putchar('0' + m);
print_last_digit(n);
}
if (j < 9)
{
_putchar(44);
_putchar(32);
}
}
_putchar('\n');
}
}
