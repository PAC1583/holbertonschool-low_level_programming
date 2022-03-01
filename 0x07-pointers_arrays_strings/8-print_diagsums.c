#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- function that prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: address of memory of destination array
 * @size: integer size array
 * Return: None
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum, sum2;
	int **p;

	sum = 0;
	sum2 = 0;
	p = &a;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; i++)
		{
			if (j == i)
			{
				sum += p[i][j];
			}
			if (j == size - i)
			{
				sum2 += p[i][j];
			}
		}
	}
	printf("%d, %d", sum, sum2);
}
