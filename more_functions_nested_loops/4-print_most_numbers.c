#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - Prints numbers 0 to 9, but do not print 2 and 4
 *
 *Return: number
 */

void print_most_numbers(void)
{
char c;
for (c = 48; c <= 57; c++)
{
if (c != 50 && c != 52)
_putchar(c);
}
_putchar(10);

}
