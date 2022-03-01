#include "main.h"
#include <stdio.h>

/**
 * print_chessboard -  function that prints the chessboard.
 *
 * @a: address of memory of destination array
 * Return: None
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    i = 0;
    while (a[i][8] != '\0')
    {
        j = 0;
        while (j < 8)
        {
            _putchar(a[i][j]);
            j++;
        }
        _putchar('\n');
        i++;
    }
}
