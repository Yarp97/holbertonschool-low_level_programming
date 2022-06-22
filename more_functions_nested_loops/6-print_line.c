#include "main.h"
#include <stdio.h>

/**
 *print_line - Draws a straight
 *@n: variable
 *Return 0
 */

void print_line(int n)
{
int a;
if (n > 0)
{
for (a = 0; a < n; a++)
_putchar('_');
}
_putchar(10);
}
