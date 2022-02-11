#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - prints using printf function number from 0 -9 and no variables int type
*Return: Always 0
*/

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
