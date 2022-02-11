#include <stdio.h>
#include <stdlib.h>


/**
*main - prints using putchar the reverse alphabet in lowercase letters
*Return: Always 0  
*/

int main(void)
{
int i = 25;
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

while (i > -1)
{
putchar(alpha[i]);
i-=1;
}
putchar('\n');
return (0);
}
