#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main- prints all the numbers of base 16 in lowercase
*
*
*Return: 0
*/
int main(void)
{
int number_hex = 0;

while (number_hex <= 9)
{
putchar((number_hex/1) + '0');
if(number_hex < 9)
{
putchar(',');
putchar(' ');
}
number_hex++;
}
putchar('\n');
return (0);
}
