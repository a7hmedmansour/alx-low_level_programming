#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main- prints all single digit numbers of base 10 starting from 0
*
*
*Return: 0
*/
int main(void)
{
int number = '0';
while (number <= '9')
{
putchar(number);
number++;
}
putchar('\n');
return (0);
}
