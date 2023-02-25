#include "main.h"
/**
 * print_most_numbers -   a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *Do not print 2 and 4
 *
 *
 * Return: 0
 *
 */
void print_most_numbers(void)
{
int count = 48;
while (count <= 57)
{
if (count != 52 && count != 50)
_putchar(count);
count++;
}
_putchar('\n');
}
