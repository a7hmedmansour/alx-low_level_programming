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
char number_hex = '0';
char char_hex = 'a';
while (char_hex <= 'f')
{
if (number_hex <= '9')
putchar(number_hex);
else if (number_hex > '9')
{
putchar(char_hex);
char_hex++;
}
number_hex++;
}
putchar('\n');
return (0);
}
