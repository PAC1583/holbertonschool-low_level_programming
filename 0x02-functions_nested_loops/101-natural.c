#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * @: none
 * Return: 0
*/

int main(void)
{
	int i = 0;
	int sumM =  0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sumM += i;
		}
		i++;
	}
	printf("%d\n", sumM);
	return (0);
}
