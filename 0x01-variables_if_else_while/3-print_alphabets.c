#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Check that prints lowercase and uppercase alphabet
 * Return: 0 Always Success
 */

int main(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
