#include <stdio.h>
#include "main.h"

/**
 * _islower - determine is the char is lowercase or not
 * @c: a character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int _islower(int c)
{
if (c < 97 || c > 123)
{
return (0);
}
else
{
return (1);
}
}
