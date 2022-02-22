#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line.
 *
 * @a: pointer to a int
 * @n: pointer to a int
 * Return: None
 */
void print_array(int *a, int n)
{
	int i;

    i=0;
	while (i < n)
	{
		printf("%d", a[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
		i++;
	}
	printf("\n");
}
