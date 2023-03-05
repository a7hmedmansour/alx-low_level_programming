#include "main.h"
#include <stdio.h>
#include <math.h>
/**
*print_number- a function that prints an integer.
*
*@n: number will be printed
*
*Retuen: void
*/
void print_number(int n)
{
int num_digits = 1, i, temp = n;
char digit_char;
if (n < 0)
{
_putchar('-');
n *= -1;
}

while (temp >= 10)
{
num_digits++;
temp /= 10;
}

for (i = num_digits - 1; i >= 0; i--)
{
digit_char = '0' + (n / (int) pow(10, i)) % 10;
_putchar(digit_char);
}
}
