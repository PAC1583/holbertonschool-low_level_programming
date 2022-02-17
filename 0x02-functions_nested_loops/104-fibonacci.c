#include "main.h"
#include <stdio.h>



/**
 * fibonacci - print the first 98 fibonacci numbers
 * @: none
 *
 * Return: none
*/

void fibonacci(void)
{
	int i;
    long n =0;
	long prev1 = 1;
    long prev2 = 2;
    long size = 9223372036854775806;

	for (i = 0; i < 98 + 1; i++)
	{
		if (i == 0)
		{
			printf("%lu, %lu, ", prev1, prev2);
		}
        if ((prev1  < prev1 + prev2
        n = prev1 + prev2;
		printf("%lu", n);
		prev1 = prev2;
		prev2 = n;
		if (i < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	fibonacci();
	return (0);
}
