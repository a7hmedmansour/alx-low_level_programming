#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main- a program that prints the alphabet in lowercase
*Print all the letters except q and e
*
*Return: 0
*/
int main(void)
{
char lowercase_letter = 'a';
while (lowercase_letter <= 'z')
{
if (lowercase_letter == 'q' || lowercase_letter == 'e')
lowercase_letter++;
else
{
putchar(lowercase_letter);
lowercase_letter++;
}
}
putchar('\n');
return (0);
}
