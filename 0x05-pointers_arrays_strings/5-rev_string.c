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
 * rev_string - reverses a string
 *
 * @s: pointer to a string
 * Return: None
 */
void rev_string(char *s)
{
	int i, j;
	int len = _strlen(s);
	char temp[50];

	i = 0;
	while (s[i] != '\0')
	{
		temp[i] = s[i];
		i++;
	}


	len = _strlen(s);
	i = len - 1;
	j = 0;
	while (i > -1)
	{
		s[j] = temp[i];
		i--;
		j++;
	}
}
