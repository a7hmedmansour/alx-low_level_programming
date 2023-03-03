#include "main.h"
#include <string.h>
/**
* _strncpy - a function that copies a string.
*@dest: destination String
*@src: source String
*@n:it will use at most n bytes from src
*Return: a pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int l_src;
int i;
/*l_dest = strlen(dest); l_dest, */
l_src = strlen(src);
if (n > l_src)
{
for (i = 0; i < l_src; i++)
dest[i] = src[i];
for (i = l_src; i < n; i++)
dest[i] = '\0';
}
else
{
for (i = 0; i < n ; i++)
dest[i] = src[i];
}
return (dest);
}
