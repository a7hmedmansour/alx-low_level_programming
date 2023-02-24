#include "main.h"
/**
 * print_line -  a function that draws a straight line in the terminal.
 * @n:n is the number of times the character _ should be printed
 *
 *
 *
 *
 */
void print_line(int n)
{
while (n > 0)
{
_putchar('-');
n--;
}
_putchar('\n');

}
