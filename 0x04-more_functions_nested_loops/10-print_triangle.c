#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle, int
 * Return: none
 */

void print_triangle(int size)
{
    int i, j;
    
    if (size > 0)
    {
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                if (j > (size - i -2))
                {
                    _putchar(35);
                }
                else
                {
                    _putchar(32);
                } 
            }
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}
