#include "main.h"

/**
  * _isdigit- checks for a digit
  * @c: an inputed digit.
  * Return: i if c i s digit, and 0 if not'
  */

int _isdigit(int c)
{
if (c <= 57 && c >= 48)
{
return (1);
}
else
{
return (0);
}
}
