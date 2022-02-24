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
	int i, j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = s1[i] - s2[i];

		if ((j > 0) || (j < 0))
		{
			return (j);
		}
		i++;
	}
	return (0);
}
