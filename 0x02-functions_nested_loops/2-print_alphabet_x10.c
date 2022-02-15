#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the  10x alphabet to stdout
 * @: no variables
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

void print_alphabet(void)
{
int i;
for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
}


void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
   print_alphabet();
}
}
