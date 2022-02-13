#include <stdio.h>
#include <stdlib.h>

/**
*main - prints using putchar the alphabet in lowercase letters,
*       except letters e and q
*Return: Always 0
*/
int main(void)
{
int i;

for (i = 97; i < 123; i++)
{
if (i == 101)
{    
}
else if (i == 113)
{
}
else
{
    putchar(i);
}
}
putchar('\n');
return (0);
}
