#include <stdio.h>
#include "5-sign.h"
#include "0-putchar.h"

/**
 * print_sign - prints the sign of a number
 * @n: n integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int print_sign(int n)
{
    if (n > 0)
    {
    _putchar('+');
    return (1);
    }
    else if (n == 0)
    {
    _putchar(0 + '0');
    return (0);
    }
    else
    {
    _putchar('-');
    return (-1);
    }
}
