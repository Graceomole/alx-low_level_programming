#include "main.h"

/**
 *
 *  main - prints all the numbers of base 16 in lowercase, followed by a new line
 * Return: Always 0 (Success)
 *
 **/

int main(void)

{
int n;
char ch;
for (n = 48; n < 58; n++)
{
_putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
_putchar(ch);
}
_putchar('\n');
return (0);
}
