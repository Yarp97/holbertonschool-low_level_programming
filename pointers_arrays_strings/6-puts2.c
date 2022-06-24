#include "main.h"
#include <stdio.h>

/**
 *puts2 - prints character
 *
 *@str: string
 */

void puts2(char *str)
{
int i;
int s = 0;

while (str[s] != 0)
{
s++;
}
for (i = 0; i < s; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar(10);

}
