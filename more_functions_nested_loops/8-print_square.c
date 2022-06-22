#include <stdio.h>
#include"main.h"

/**
 * print_square - prints square
 * @n: number
 * return: number
 */

void print_square(int size)
{
int a;
int b;

if (size > 0)
{
for (a = 0; a < size; a++)
{
for (b = 0; b < a; b++)
{
_putchar('#');
if (a == size - 1)
continue;
_putchar('\n');
}
}
_putchar(10);
}
}
