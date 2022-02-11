#include <stdio.h>
#include <stdlib.h>


/* betty style doc for function main goes there */
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
