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
	int i;

	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

		i++;
	}

	return (NULL);
}
