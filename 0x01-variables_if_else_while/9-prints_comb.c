#include <stdio.h>

/**
 *main - Check that prints num 0 to 9
 *
 *Return:Always 0 (Succesful)
 */

int main(void)
{
int c;
for (c = '0'; c <= '9' ; c++)
{
putchar(c);
if (c != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
