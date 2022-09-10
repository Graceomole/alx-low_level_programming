#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: print alphabet in lowercase
 * Return: 0
 */

int main(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
else
{
}
}
putchar('\n');
return (0);
}
