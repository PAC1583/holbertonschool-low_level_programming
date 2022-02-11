#include <stdio.h>
#include <stdlib.h>

/**
*main - prints hexadecimal numbers 
*Return: Always 0
*/

int main(void)
{
int i;
char alpha[26] = "0123456789abcdef";

for (i = 0; i < 16; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
