#include "main.h"
/**
 * more_numbers -  a function that prints 10 times the numbers
 * from 0 to 14, followed by a new line
 *
 *
 *
 * Return: 0
 *
 */
void more_numbers(void)
{
char digit1 = '0', digit2 = '0';
int times = 0, count = 0;
while (times <= 10)
{
while (count <= 14)
{
_putchar(digit1);
if (count >= 9)
digit1 = '1';
else
digit1++;
if (count > 9)
{
_putchar(digit2);
digit2++;
}
count++;
}
times++;
count = 0;
digit1 = '0', digit2 = '0';
_putchar('\n');
}
}
