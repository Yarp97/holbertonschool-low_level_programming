#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 *_isalpha - Prints lowercase and uppercase
 *@c: letter
 *
 * Return: letter
 */

int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
if (c >= 65 && c <= 90)
{
return (1);
}
else
return (0);
}
