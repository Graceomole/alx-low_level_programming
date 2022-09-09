#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *Main - Application entry point
 *Description : To check if a number is negative or positive
 *Returm: 0
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive");
}
else if (n == 0)
{
printf("%d is zero");
}
else if (n < 0)
{
printf("%d is negative");
}
return (0);
}
