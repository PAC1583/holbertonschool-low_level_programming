#include "main.h"
#include <stdio.h>

/**
 * *_strcmp - function that compares two strings.
 *
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: None
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, n;

	i = 0, j = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[j])
		{
			n = s1[0] - s2[0];
			return (n);
		}
		i++;
		j++;
	}
	return (0);
}
