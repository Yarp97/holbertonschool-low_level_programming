#include "main.h"
#include <stdio.h>

/**
 *print_rev - Print a string revere
 *@s: parametro
 *
 */

void print_rev(char *s)
{
int n = 0;
int i;

while (s[n] != 0)
{
n++;
}

for (i = 0; i < n; i++)
{
_putchar(s[n - i - 1]);
}
_putchar(10);
}
