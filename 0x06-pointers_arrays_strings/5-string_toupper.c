#include "main.h"
#include <stdio.h>

/**
 * _strlen -  returns the length of a string.
 * and updates the value it points to 98.
 * @s: pointer to a string
 * Return: None
 */
int _strlen(char *s)
{
    int i = 0;
    int len = 0;

    while (s[i] != '\0')
    {
        len += 1;
        i++;
    }
    return (len);
}

/**
 * *string_toupper -  a function that changes all lowercase letters of a string to uppercase.
 *
 * @s: pointer to a string
 * Return: None
 */
char *string_toupper(char *s)
{
    int len, i, n;

    len = _strlen(s);

    for (i = 0; i < len - 1; i++)
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
