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
 * puts_half -  prints half of a string, followed by a new line
 *
 * @str: pointer to a string
 * Return: None
 */
void puts_half(char *str)
{
	int i, n;
	int len  = _strlen(str);

    if (len%2 != 0)
    {
        n = (len - 1) / 2;
    }
    else
    {
        n = len / 2;
    }

	
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
