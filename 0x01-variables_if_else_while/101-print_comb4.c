#include <stdio.h>
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
int frist_digit = 0, second_digit, third_digit;
while (frist_digit <= 7)
{
second_digit = frist_digit + 1;
while (second_digit <= 8)
{
third_digit = second_digit + 1;
while (third_digit <= 9)
{
putchar((frist_digit / 1) + '0');
putchar((second_digit / 1) + '0');
putchar((third_digit / 1) + '0');
if ((frist_digit * 100) + (second_digit * 10) + third_digit != 789)
{
putchar(',');
putchar(' ');
}
third_digit++;
}
second_digit++;
}
frist_digit++;
}
putchar('\n');
return (0);
}
