#include <stdio.h>
#include "main.h"
/**
*main - calls the function _putchar
*Return: Always 0
*/


int main(void)
{
int a[8] = {95, 112, 117, 116, 99, 104, 97, 114};
int i;
for (i = 0; i < 8; i++)
{
_putchar(a[i]);
}
_putchar('\n');
return (0);
}
