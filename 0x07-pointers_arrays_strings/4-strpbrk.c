#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: pointer to a string
 * @accept: pointer to a string
 * Return: address of a char
 */
char *_strpbrk(char *s, char *accept)
{
    unsigned int i, j;

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (accept[j] != '\0')
        {
            if (accept[j] == s[i])
            {
                return (&s[i]);
            }
            j++;
        }
        i++;
    }
    return (NULL);
}
