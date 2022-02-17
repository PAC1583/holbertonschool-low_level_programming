#include <stdio.h>

/**
 * Fizz_Buzz - prints the numbers from 1 to 100, followed by a new line.
 * multiples of three print Fizz, multiples of five print Buzz,
 * multiples of both three and five print FizzBuzz.
 * @: none
 * Return: none
 */
void Fizz_Buzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz");
				printf("%c", 32);
			}
			else
			{
				printf("Fizz");
				printf("%c", 32);
			}
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf("%c", 32);
		}
		else
		{
			printf("%d", i);
			printf("%c", 32);
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
	Fizz_Buzz();
	return (0);
}
