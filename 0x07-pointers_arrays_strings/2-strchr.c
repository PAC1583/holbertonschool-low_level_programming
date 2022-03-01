#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function that locates a character in a string.
 *
 * @s: pointer to string
 * @c: pointer to string
 * Return: None
 */
char *_strchr(char *s, char c)
{
	int i, j;

	if (s == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}

	i = 0;
	while (i < j + 1)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	return (NULL);
}
