#include "main.h"
#include <stdio.h>

/**
 **_strcat - cancatenates two string
 *@dest: string destino
 *@src: string world
 *Return: dest
 */

char *_strcat(char *dest, char *src)

{

int posicion1, posicion2;

for (posicion1 = '0'; dest[posicion1] != 0; posicion1++)
{
for (posicion2 = '0'; src[posicion2] != 0; posicion2++)
{
dest[posicion1 + posicion2] = src[posicion2];
dest[posicion1 + posicion2] = '\0';
}
}

return (dest);
}
