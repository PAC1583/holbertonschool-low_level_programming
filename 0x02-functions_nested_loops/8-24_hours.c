#include <stdio.h>
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
 * jack_bauer - rints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * @n: n integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

void jack_bauer(void)
{
int h, m, hour, min = 0;
int j;

for (j = 0; j < 1440; j++)
{
hour = j / 60;
h = hour / 10;
_putchar('0' + h);
print_last_digit(hour);
_putchar(58);
min = j % 60;
if (min < 10)
{
_putchar('0' + 0);
_putchar('0' + min);
}
else
{
m = min / 10;
_putchar('0' + m);
print_last_digit(min);
}
_putchar('\n');
}
}
