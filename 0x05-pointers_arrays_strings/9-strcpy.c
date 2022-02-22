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
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: pointer to a string
 * @src: pointer to a string
 * Return: None
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = _strlen(src);
	i = len;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
