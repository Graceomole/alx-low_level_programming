#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Check that prints alphabet in lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
