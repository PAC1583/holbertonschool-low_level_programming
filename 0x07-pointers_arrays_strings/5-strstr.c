#include "main.h"
#include <stdio.h>

/**
 * *_strstr -  function that locates a substring.
 *
 * @haystack: a pointer to a string
 * @needle: a pointer to a string
 * Return: a char
 */
char *_strstr(char *haystack, char *needle)
{
    unsigned int i, j;

    i = 0;
    while (haystack[i] != '\0')
    {
        if (needle[0] == haystack[i])
        {
            j = 1;
            while (needle[j] != '\0')
            {
                if (needle[j] != haystack[i + j])
                {
                    break;
                }
                j++;
            }
            if (needle[j] == '\0')
            {
                return (&haystack[i]);
            }
        }
        i++;
    }
    return (NULL);
}
