#include <stdio.h>
#include <stdlib.h>


/**
*main - Prints a combination of numbers
*Return: Always 0  
*/

int main(void)
{
int i;
char alpha[26] = "0,1,2,3,4,5,6,7,8,9";

for (i = 0; i < 19; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
