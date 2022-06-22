#include "main.h"
#include <stdio.h>

/**
 *swap_int - t swaps the values of two integers
 *@a: number1
 *@b: number2
 *@*a
 *@*b
 *
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
