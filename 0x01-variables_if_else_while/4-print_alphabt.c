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
char alpha[26] = "abcdfghijklmnoprstuvwxyz";

for (i = 0; i < 26; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
