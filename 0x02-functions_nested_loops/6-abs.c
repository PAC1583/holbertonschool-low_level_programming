#include <stdio.h>
#include "6-abs.h"
#include "0-putchar.h"

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
