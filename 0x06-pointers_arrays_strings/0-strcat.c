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
 * *_strcat -  function that concatenates two strings.
 *
 * @dest: pointer to a string
 * @src: pointer to a string
 * Return: None
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	int len, len2;

	len = _strlen(dest);
	len2 = _strlen(src);

	for (i = len, j = 0; i < len2 + len; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
