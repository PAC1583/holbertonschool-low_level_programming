#include <stdio.h>
#include <stdlib.h>
/**
*main - Prints a combination of numbers
*Return: Always 0
*/
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(32);
}
}
putchar('\n');
return (0);
}
