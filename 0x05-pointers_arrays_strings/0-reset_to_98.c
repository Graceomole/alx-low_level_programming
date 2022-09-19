#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - takes a pointer to a parameter and upddate its value.
 * @n: input integer.
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

