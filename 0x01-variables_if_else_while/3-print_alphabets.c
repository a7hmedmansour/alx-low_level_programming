#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main- a program that prints the alphabet in lowercase
*and then in uppercase
*
*Return: 0
*/
int main(void)
{
char lowercase_letter = 'a';
char uppercase_letter = 'A';
while (lowercase_letter <= 'z')
{
putchar(lowercase_letter);
lowercase_letter++;
}

while (uppercase_letter <= 'Z')
{
putchar(uppercase_letter);
uppercase_letter++;
}
putchar('\n');
return (0);
}
