#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
int n;
n = 402;
int *ptr = NULL;
ptr = &n;
printf("n = %d\n", n);
*ptr = 98;
printf("n = %d\n", *ptr);
return (0);
}

