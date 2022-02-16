#include "main.h"
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
            even+=prev2;
            printf("%ld\n", even);
		}
        n = prev1 + prev2;
        prev1 = prev2;
		prev2 = n;
        if (prev2 % 2 == 0)
        {
            even += prev2;
            if (n > 4000001)
            {
                break;
            }
            else
            {
                printf("%ld\n", even);
            }
        }
	}
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	fibonacciSum();
	return (0);
}
