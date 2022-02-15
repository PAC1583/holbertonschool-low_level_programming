#include <stdio.h>
#include "main.h"

/**
 * _isalpha - determine if the char is a letter or not
 * @c: a character
 *
 * Return: 1 if true .
 * if false, 0 is returned.
*/

int _isalpha(int c)
{
if  (c < 97 || c > 123)
{
if (c < 65 || c > 90)
{
return (0);
}
else
{
return (1);
}
}
else
{
return (1);
}
}
