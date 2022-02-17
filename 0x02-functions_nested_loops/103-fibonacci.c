#include <stdio.h>



/**
 * fibonacciSum - print su even fibonacci numbers
 * @: none
 *
 * Return: none
*/

void fibonacciSum(void)
{
	int i =  0;
	long n, even = 0;
	long prev1  = 1;
	long prev2  = 2;

	for (i = 0; i < 48 + 1; i++)
	{

		if (i == 0)
		{
			even += prev2;
		}
		n = prev1 + prev2;
		prev1 = prev2;
		prev2 = n;
		if (prev2 % 2 == 0)
		{
			if (n > 4000001)
			{
				break;
			}
			even += prev2;
		}
	}
	printf("%ld\n", even);
}
