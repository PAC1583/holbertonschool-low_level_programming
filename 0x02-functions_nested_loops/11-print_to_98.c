#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: n integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

void print_to_98(int n)
{
int end = 98;
int i;
if (n < end)
{
for (i = n; i < end+1; i++)
{
printf("%d", i);
if (i != end)
{
    printf(", ");
}
}
}
else if (n > end)
{
i = n;
while(i != end-1)
{
printf("%d", i);
if (i != end)
{
    printf(", ");
}
i-=1;
}
}
else if (n == end)
{
printf("%d", n);
}
printf("\n");
}
