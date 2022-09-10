#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: check that prints base 10 single numbers
 * Return 0 Always Success
 */

int main(void)
{
  int x;
  for (x = 0; x < 10; x++)
    {
      printf("%d", x);
    }
  putchar('\n');
  return (0);
}
