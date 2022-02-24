#include "main.h"
#include <stdio.h>

/**
 * *cap_string -   function that capitalizes all words of a string
 *
 * @s: pointer to a string
 * Return: None
 */
char *cap_string(char *s)
{
	int i, n, m, j;
	int signs[12] = {32, 46, 40, 41, 123, 125, 44, 59, 34, 63};

	i = 0;
	while ((s[i] != '\0'))
	{
		m = s[i];
		for (j = 0; j < 10; j++)
		{
			if (m == signs[j] || (s[i] == '\n') || (s[i] == '\t'))
			{
				if (s[i + 1] > 96)
				{
					n = s[i + 1] - 97;
					s[i + 1] = 65 + n;
				}
			}
		}
		i++;
	}

	return (s);
}
