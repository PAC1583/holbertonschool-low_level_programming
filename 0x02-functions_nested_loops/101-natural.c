#include <stdio.h>

/**
 * naturals - prints the sum of all the multiples of 3 or 5 below 1024
 * @: none
 * Return: none
*/

void naturals(void)
{
	int i = 0;
	int sumM =  0;

	while (sumM < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sumM += i;
		}
		i++;
	}
	printf("%d\n", sumM);
}

/**
 * main - check the code.
 * Return: Always 0.
 */

int main(void)
{
	naturals();
	return (0);
}
