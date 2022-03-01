#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

	sum = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{

		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				sum += *(a + i * size + j);
			}
			if (j == size - i - 1)
			{

				sum2 += *(a + i * size + j);
			}
		}
	}
	printf("%d, %d\n", sum, sum2);
}
