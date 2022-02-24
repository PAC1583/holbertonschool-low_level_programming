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
    int i, n, m;

    while ((s[i] != '\0'))
    {
        m = s[i];
        if ((m == 32) || (s[i] == '\n') || (s[i] == '\t') || (m == 46) || (m == 40) || (m == 123) || (m == 44))
        {
            if (s[i + 1] > 96)
            {
                n = s[i + 1] - 97;
                s[i + 1] = 65 + n;
                printf("%c", s[i]);
            }
        }
        i++;
    }

    return (s);
}
