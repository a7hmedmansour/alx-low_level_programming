#include <stdio.h>
#include<string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main- prints all possible different combinations of two digits
*
*
*Return: 0
*/
int main(void)
{
int frist_digit = 0, second_digit;
while (frist_digit <= 8)
{
second_digit = frist_digit + 1;
while (second_digit <= 9)
{
putchar((frist_digit / 1) + '0');
putchar((second_digit / 1) + '0');
if ((frist_digit * 10) + second_digit != 89)
{
putchar(',');
putchar(' ');
}
second_digit++;
}
frist_digit++;
}
putchar('\n');
return (0);
}
