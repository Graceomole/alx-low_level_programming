#include "main.h"

/**
 * _strcat - a function that concacanates two string,
 * @dest: destination.
 * @src: source.
 * Return: returns the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';

return (dest);
}
