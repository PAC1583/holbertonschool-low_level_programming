#include "main.h"
#include <stdio.h>

/**
 * *_memset -    function that fills memory with a constant byte.
 *
 * @s: pointer to a string
 * @b: pointer to a string
 * @n: unsigned int
 * Return: None
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        s[i] = b;
        i++;
    }

    return (s);
}
