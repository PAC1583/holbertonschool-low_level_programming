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
	char temp[500];

	
	for (i = 0; i < len+1; i++)
	{
		temp[i] = s[i];
	}

    j = len - 1;
	for (i = 0; i < len+1; i++)
	{
		s[i] = temp[j];
        j-=1;
	}
}
