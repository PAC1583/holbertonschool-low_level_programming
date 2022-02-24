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
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	if (i == j)
	{
		return (0);
	}
	else if (j < i)
	{
		return (15);
	}
	else
	{
		return (-15);
	}
}
