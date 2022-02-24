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
 * *_strncat -   function that concatenates two strings only until n bytes
 *
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: integer - bytes
 * Return: None
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int len, len2;

	len = _strlen(dest);
	len2 = _strlen(src);

	if (len2 > n)
	{
		len2 = n;
	}

	for (i = len, j = 0; i < len2 + len; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
