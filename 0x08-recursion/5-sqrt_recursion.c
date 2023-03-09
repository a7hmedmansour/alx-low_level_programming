#include "main.h"
int _sqrt(int n, int i);
/**
*_sqrt_recursion- a function that returns the natural square root of a *number
*
*@n: square number.
*
*Return:returns the root of a number.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(n, 0));
}
/**
*_sqrt- a function find the natural square root of a number.
*
*@n: square number.
*@i: counter number
*Return:returns the root of a number.
*/
int _sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));
}
