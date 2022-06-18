#include<stdio.h>
#include"main.h"

/**
 *print_last_digit - prints last digit
 *@n: letter
 *Return: number
 */

int print_last_digit(int n)

{
int last_Digit;

last_Digit = n % 10;

if (n < 0)
{
last_Digit = last_Digit * -1;
}

_putchar(last_Digit + '0');
return (last_Digit);
}
