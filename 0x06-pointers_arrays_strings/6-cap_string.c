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
 * *cap_string -   function that capitalizes all words of a string
 *
 * @s: pointer to a string
 * Return: None
 */
char *cap_string(char *s)
{
    int len, i, n;

    len = _strlen(s);

    for (i = 0; i < len - 1; i++)
    {
        if ((s[i] == 32) || (s[i] == 123) || (s[i] == 125) || (s[i] == 40) || (s[i] == 41) || (s[i] == '\n') || (s[i] == '\t') || (s[i] == 44) || (s[i] == 59) || (s[i] == 46))
        {
            if ((s[i + 1] < 123))
            {
                n = s[i + 1] - 97;
                s[i + 1] = 65 + n;
            }
            else
            {
                continue;
            }
        }
    }
    return (s);
}
