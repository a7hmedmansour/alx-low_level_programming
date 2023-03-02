#include "main.h"
#include <string.h>
/**
* _strcat - function appends the src string to the dest string
*@dest: String is  appended by src
*@src: String is  appended into  dest
*
*Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
int l_dest, l_src;
int i, j = 0;
l_dest = strlen(dest);
l_src = strlen(src);
for (i = l_dest ; i < l_dest + l_src; i++)
{
dest[i] = src[j];
j++;
}
return (dest);
}
