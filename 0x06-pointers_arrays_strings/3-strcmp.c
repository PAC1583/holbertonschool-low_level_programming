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
 * *_strcmp - function that compares two strings.
 *
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: None
 */
int _strcmp(char *s1, char *s2)
{
    int len, len2;

    len = _strlen(s1);
    len2 = _strlen(s2);

    if (len2 == len)
    {
        return (0);
    }
    else if (len2 < len)
    {
        return (15);
    }
    else
    {
        return (-15);
    }
}
