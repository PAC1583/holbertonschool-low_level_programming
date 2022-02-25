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
	int i, n, m, j, l;
	int signs[12] = {32, 33, 46, 44, 59, 63, 34, 40, 41, 123, 125};

	i = 0;
	while ((s[i] != '\0'))
	{
		m = s[i];
		for (j = 0; j < 10; j++)
		{
			if (m == signs[j] || (s[i] == '\n') || (s[i] == '\t') || (i == 0))
			{
				l = (i != 0) ? 1 : 0;

				if ((s[i + l] > 96))
				{
					n = s[i + l] - 97;
					s[i + l] = 65 + n;
				}
			}
		}
		i++;
	}

	return (s);
}
