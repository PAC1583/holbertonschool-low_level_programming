#include <stdio.h>
#include <stdlib.h>

/* betty style doc for function main goes there */
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
