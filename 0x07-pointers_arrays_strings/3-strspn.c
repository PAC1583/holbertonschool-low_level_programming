#include "main.h"
#include <stdio.h>

/**
 *  _strspn - function that gets the length of a prefix substring.
 *
 * @s: address of memory of destination array
 * @accept: address of memory of source array
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j, count;

    count = 0;
    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (accept[j] != '\0')
        {
            if (accept[j] == s[i])
            {
                count += 1;
            }
            j++;
        }
        i++;
        if (count != i)
        {
            return (i - 1);
        }
    }
    return (i - 1);
}
