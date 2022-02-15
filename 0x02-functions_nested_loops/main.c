#include <stdio.h>
#include "main.h"
/**
*main - calls the function _putchar
*Return: Always 0
*/

#define SIZE 10

int main(void)
{
int a[SIZE] = {95, 112, 117, 116, 99, 104, 97, 114} ;
int i;
for (i = 0; i < SIZE; i++)
{
_putchar(a[i]);
}
_putchar('\n');
return(0);
}
