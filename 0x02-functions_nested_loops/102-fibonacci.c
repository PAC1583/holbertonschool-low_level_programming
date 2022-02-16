#include "main.h"
#include <stdio.h>



/**
 * fibonacci - print fibonacci numbers
 * @: none
 *
 * Return: none
*/

void fibonacci(void)
{
	int i =  0;
	long n = 0;
	long prev1  = 1;
	long prev2  = 2;

	for (i = 0; i < 48 + 1; i++)
	{
		if (i == 0)
		{
			printf("%lu, %lu, ", prev1, prev2);
		}
		else
		{
			n = prev1 + prev2;
			printf("%lu", n);
			prev1 = prev2;
			prev2 = n;
			if (i < 48)
			{
				printf(", ");
			}
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
