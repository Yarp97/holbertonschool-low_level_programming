#include<stdio.h>
#include"main.h"

/**
 *print_to_98 - prints numbers to 98
 *@n: letter
 *Return: number
 */

void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
if (n < 98)
{
n++;
}
else
{
n--;
}
}
printf("%d\n", 98);
}
