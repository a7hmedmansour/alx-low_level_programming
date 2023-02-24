#include "main.h"
/**
*print_triangle - a function that prints a triangle
*
*@size: is the size of the triangle
*
*/
void print_triangle(int size)
{
int h, b, s;
if (size <= 0)
_putchar('\n');
else
{
for (s = 0; s < size; s++)
{
for (b = 1; b < size - s; b++)
_putchar(32);
for (h = 0; h <= s; h++)
_putchar(35);
_putchar('\n');
}
}
}
