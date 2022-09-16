#include "main.h"

/**
 * print_most_numbers - print numbers between 0 and 9 (neither 2 nor 4).
 * Return: no return.
 */

void print_most_numbers(void)
{
int i;
for (i = 48; 1 < 58; i++)
{
if (i != 50 && i != 52)
_putchar(i);
}
_putchar("\n");
}
