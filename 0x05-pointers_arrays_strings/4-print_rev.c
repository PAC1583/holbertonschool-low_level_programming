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
 * print_rev - prints the reverse of a string
 *
 * @s: pointer to a string
 * Return: None
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = _strlen(s);
	i = len;
	while (i > -1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
