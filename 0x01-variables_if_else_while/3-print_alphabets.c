#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* betty style doc for function main goes there */
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
