#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concacanates two string,
 * @dest : destination.
 * @src : source.
 * Return: returns the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
int s1, s2;
s1 = 0;
while (dest[s1])
s1++;
for (s2 = 0; src[s2]; s2++)
dest[s1++] = src[s2];
return (dest);
}
