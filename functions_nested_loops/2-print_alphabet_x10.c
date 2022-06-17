#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10(void) - prints alphabet
 * Return: void
 */

void print_alphabet_x10(void);

{
int a, b;
for (b = 0; b < 10; b++)
{
for (a = 97; a <= 122; a++)
{
_putchar(a);

}
_putchar(10);
}
}
