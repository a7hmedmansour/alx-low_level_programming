#include "main.h"
/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 * @size:Where size is the size of the square
 *
 *
 *
 *
 */
void print_square(int size)
{
int l, w;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (l = 0; l < size; l++)
{
for (w = 0; w < size; w++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
