#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;
<<<<<<< HEAD
if (a >= b && a >= c)
=======

if (a >= b && b >= c)
>>>>>>> 8e5c059749147bd3ccba0e07a7974b747c7d1962
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
