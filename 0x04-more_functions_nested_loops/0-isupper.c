#include "main.h"

/**
 * main: checks for uppercase character
 * @c: input character
 * Return: 1 for an uppercase letter, 0 otherwise
 * _isupper: checks if a character is uppercase
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
