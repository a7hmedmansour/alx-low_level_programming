#include "main.h"
/**
*_memset- function that fills memory with a constant byte.
*
*@s: a pointer to the block of memory to fil
*
*@b: This is the value to be set
*
*@n:the number of bytes to be set to the value.
*
*Return:a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
