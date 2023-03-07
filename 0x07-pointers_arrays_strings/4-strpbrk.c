#include "main.h"
#include <string.h>
/**
*_strpbrk-  a function that searches a string for any of a set of bytes.
*
*@s: String to search in it
*
*@accept: string containing the characters to match
*
*
*
*Return: a pointer to the byte in s
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0, j, n;
n = strlen(accept);
while (s[i] != '\0')
{
for (j = 0; j < n; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
break;
}
}
i++;
}
return (&s[i]);
}
