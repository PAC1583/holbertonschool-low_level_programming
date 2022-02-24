#include "main.h"
#include <stdio.h>

/**
 * *cap_string -   function that capitalizes all words of a string
 *
 * @s: pointer to a string
 * Return: None
 */
char *cap_string(char *s)
{
    int i, n;

    while (s[i] != '\0')
    {
        if (s[i] == 32)
        {
            if (s[i + 1] > 96)
            {
                n = s[i + 1] - 97;
                s[i + 1] = 65 + n;
            }
        }
        i++;
    }
    return (s);
}
