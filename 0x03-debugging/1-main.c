#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;
<<<<<<< HEAD
/**
 *while (i < 10);
 *{
 *putchar(i);
 *}
 */
=======
/*
* while (i < 10);
* {
* putchar(i);
* }
*/
>>>>>>> 3fb0eef715e65cc37bbfca2569153f53605cf674
printf("Infinite loop avoided! \\o/\n");

return (0);
}
