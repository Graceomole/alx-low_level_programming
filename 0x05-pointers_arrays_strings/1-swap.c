#include "main.h"

/**
 * swap_int - to swap values of two integers.
 * @a: first integer
 * @b: second integer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
