#include <stdlib.h>
#include <stdio.h>

/**
*main - Returns if the number is positive, negative or zero
*Return: Always 0
*/

void positive_or_negative(int n)
{
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is positive\n", n);
}
}
