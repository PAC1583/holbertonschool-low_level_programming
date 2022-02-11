#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - prints using putchar the alphabet in lower- and uppercase letters
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
for (i = 0; i < 26; i++)
{
putchar(toupper(alpha[i]));
}
putchar('\n');
return (0);
}
