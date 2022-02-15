#include <stdio.h>
#include "7-print_last_digit.h"
#include "0-putchar.h"
#include "6-abs.c"

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
