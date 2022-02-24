#include "main.h"
#include <stdio.h>

/**
 * reverse_array -  function that reverses the content of an array of integers.
 *
 * @a: pointer to an int array
 * @n: an int
 * Return: None
 */
void reverse_array(int *a, int n)
{
    int i, j = 0;
    int current;

    i = n - 1;
    while (j <= i)
    {
        current = a[j];
        a[j] = a[i];
        a[i] = current;
        i--;
        j++;
    }
}
