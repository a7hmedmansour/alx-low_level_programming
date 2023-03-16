#include "main.h"
#include <string.h>
/**
*str_concat - a function that concatenates two strings
*@s1: frist string
*@s2: second string
*Return: returned pointer to string
*contains the contents of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
int size_s1 = 0, size_s2 = 0, size, i;
char *newstr;
if (s1 == NULL && s2)
{
size_s2 = strlen(s2);
size = size_s1 + size_s2 + 1;
}
else if (s2 == NULL && s1)
{
size_s1 = strlen(s1);
size = size_s1 + size_s2 + 1;
}
else if (s2 == NULL && s1 == NULL)
{
size = size_s1 + size_s2 + 1;
}
else
{
size_s1 = strlen(s1);
size_s2 = strlen(s2);
size = size_s1 + size_s2;
}
newstr = malloc(sizeof(char) * size);
if (newstr == NULL)
return (NULL);
else
{
for (i = 0; i < size; i++)
{
if (i < size_s1)
newstr[i] = s1[i];
else if (i - size_s1 < size_s2)
newstr[i] = s2[i - size_s1];
else
newstr[i] = '\0';
}
}
return (newstr);
}
