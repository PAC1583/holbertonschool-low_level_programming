#include "main.h"
#include <stdio.h>

/**
 * *leet - function that encodes a string into 1337.
 *
 * @s: pointer to a string
 * Return: None
 */
char *leet(char *s)
{
    int i, n, j;
    int letters[6] = {97, 101, 108, 111, 116};
    int nums[6] = {52, 51, 49, 48, 55};

    i = 0;
    while (s[i] != '\0')
    {
        n = s[i];
        for (j = 0; j < 5; j++)
        {
            if ((n == letters[j]) || (n == (letters[j] - 32)))
            {
                s[i] = nums[j];
            }
        }
        i++;
    }
    return (s);
}
