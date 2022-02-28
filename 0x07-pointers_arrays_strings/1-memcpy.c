#include "main.h"
#include <stdio.h>

/**
 * *_memset -    function that fills memory with a constant byte.
 *
 * @dest: address of memory of destination array
 * @src: address of memory of source array
 * @n: unsigned int
 * Return: None
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }

    return (dest);
}
