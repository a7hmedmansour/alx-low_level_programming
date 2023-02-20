#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main- a program that prints the lowercase alphabet in reverse
*
*
*Return: 0
*/
int main(void)
{
char lowercase_letter = 'z';
while (lowercase_letter >= 'a')
{
putchar(lowercase_letter);
lowercase_letter--;
}
putchar('\n');
return (0);
}
