#include <stdio.h>
#include "2-print_alphabet_x10.h"
#include "0-putchar.h"

/**
 * print_alphabet - prints the  10x alphabet to stdout
 * @: no variables
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

void print_alphabet_x10(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
    for (j = 97; j < 123; j++)
    {
    _putchar(j);
    }
    _putchar('\n');
}
}
