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
	int i, n = 0; 
    int prev1  = 1;
    int prev2  = 2;

	for (i = 0; i < 48 + 1; i++)
	{
        if (i == 0)
        {
            printf("%d, %d\n", prev1, prev2);
        }
        else 
        {
            n = prev1 + prev2;
            printf("%d, ", n);
            prev1 = prev2;
            prev2 = n;
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
