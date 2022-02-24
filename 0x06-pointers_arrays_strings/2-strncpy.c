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
 * *_strncpy -    function that copies a string only until n bytes
 *
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: integer - bytes
 * Return: None
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len2;

	len2 = _strlen(src);

	if (len2 > n)
	{
		len2 = n;
	}

	for (i = 0; i < len2; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
