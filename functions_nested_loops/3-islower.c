#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 *_islower - Prints lowercase
 *@c: letter
 *
 * Return: letter
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
return (0);
}
