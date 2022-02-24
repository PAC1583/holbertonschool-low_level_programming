#include "main.h"
#include <stdio.h>

/**
 * *string_toupper -  a function that changes all lowercase letters of a string to uppercase.
 *
 * @s: pointer to a string
 * Return: None
 */
char *string_toupper(char *s)
{
    int len, i, n;

    for (i = 0; s[i] != "\0"; i++)
    {
        if ((s[i] > 96))
        {
            if ((s[i] < 123))
            {
                n = s[i] - 97;
                s[i] = 65 + n;
            }
        }
    }
    return (s);
}
