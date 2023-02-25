#include "main.h"
#include <stdio.h>

/**
* print_number -  a function that prints an integer.
* @n: The integer to prints.
*
* Return: Nothing!
*/
void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
n = n * -1;
num = n;
_putchar('-');
}

num = num / 10;

if (num  != 0)
print_number(num);

_putchar((unsigned int) n % 10 + '0');

}
