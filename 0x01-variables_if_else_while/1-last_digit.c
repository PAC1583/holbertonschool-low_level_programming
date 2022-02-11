#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Returns last digit of a random number
*Return: Always 0
*/

int main(void)
{
int n;
int last = 0;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = abs(n % 10);
if (last != 0 && last < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
else if (last == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last);
}
else if (last > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last);
}
return (0);
}
