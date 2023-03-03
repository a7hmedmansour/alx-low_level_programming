#include "main.h"
#include <string.h>
/**
* _strncat - function appends the src string to the dest string
*@dest: String is  appended by src
*@src: String is  appended into  dest
*@n:it will use at most n bytes from src
*Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int l_dest, l_src;
int i, j = 0;
l_dest = strlen(dest);
l_src = strlen(src);
if (n > l_src)
{
for (i = l_dest ; i < l_dest + l_src; i++)
{
dest[i] = src[j];
j++;
}
}
else
{
for (i = l_dest ; i < l_dest + n; i++)
{
dest[i] = src[j];
j++;
}
}
return (dest);
}
