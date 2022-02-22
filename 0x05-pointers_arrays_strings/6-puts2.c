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
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: pointer to a string
 * Return: None
 */
void puts2(char *str)
{
	int i;
	int len;

	len = _strlen(str);
	i = 0;
	while (i < len)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
