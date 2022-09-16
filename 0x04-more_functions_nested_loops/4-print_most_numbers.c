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
<<<<<<< HEAD
_putchar(i + '0');
=======
{
_putchar(i + '0');
}
>>>>>>> 238674407ef1c1873f06c915e286d20b7371474f
}
_putchar("\n");
}
