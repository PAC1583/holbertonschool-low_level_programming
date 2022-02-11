#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* betty style doc for function main goes there */
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
