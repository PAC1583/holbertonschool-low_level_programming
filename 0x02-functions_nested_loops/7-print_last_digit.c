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
return lastD;
}
