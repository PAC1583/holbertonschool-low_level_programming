#include <stdio.h>


/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("Fizz");
			}
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
			
		}
        if (i < 100)
        {
            printf("%c", 32);
        }
	}
	printf("\n");
    return (0);
}
