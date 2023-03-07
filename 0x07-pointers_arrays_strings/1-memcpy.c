#include "main.h"
/**
*_memcpy- a function that copies memory area
*
*@dest: a pointer to the block of memory to fil
*
*@src: a pointer to the block of memory to copy
*
*@n:the number of bytes to be set to the value.
*
*Return:a pointer to the memory area s
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
