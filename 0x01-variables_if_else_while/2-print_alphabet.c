#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main- a program that prints the alphabet in lowercase
*
*Return: 0
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
