#include <stdio.h>
#include "main.h"


/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 &4, followed by a new line.
 * @: none
 * Return: none
 */

void print_most_numbers(void)
{
    int i;

    for (i = 48; i < 58; i++)
    {
        if (i ==  50)
        {
        }
        else if (i ==  52)
        {
        }
        else
        {
            _putchar(i);
        }  
    }
    _putchar('\n');
}
