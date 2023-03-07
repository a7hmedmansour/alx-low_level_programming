#include "main.h"
#include <stdio.h>
/**
*_strchr- a function that locates a character in a string.
*
*@s: String to search in it
*
*@c: char search about it
*
*
*
*Return:a pointer to the memory area s
*/
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
}
return (NULL);
}
