#include <stdio.h>
#include "main.h"
/**
* print_rev - a function that prints a string, in reverse
* @s:  string to print in reverse
*
* Return: void
*/
void print_rev(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}
int i;
for (i = len; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

