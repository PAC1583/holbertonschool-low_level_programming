#include <stdlib.h>
#include <stdio.h>

/**
*main - prints using putchar the alphabet in lowercase letters
*Return: Always 0
*/

int main(void)
{
int i;
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 26; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
