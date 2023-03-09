#include "main.h"
int _prime(int n, int i);
/**
*is_prime_number- a function that returns 1
*if the input integer is a prime number
*
*@n: input number.
*
*Return: returns 1 if the input integer is a prime number, otherwise *return 0.
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (_prime(n, n - 1));
}
/**
*_prime- a function find prime number
*
*@n: input number.
*@i:counter
*Return: returns 1 if the input integer is a prime number, otherwise *return 0.
*/
int _prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (_prime(n, i - 1));
}
