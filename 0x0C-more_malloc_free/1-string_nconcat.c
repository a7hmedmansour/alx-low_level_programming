#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: orignal string
 * @s2: append string
 * @n: number of bytes from s2
 *
 * Return: pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int len1, len2, i = 0, j = 0;
if (s1 && s2)
{
len1 = strlen(s1);
len2 = strlen(s2);
}
else if (!s1)
{
len1 = 0;
len2 = strlen(s2);
}
else if (!s2)
{
len1 = strlen(s1);
len2 = 0;
}
if (n < len2)
s = malloc(sizeof(char) * (len1 + n + 1));
else
s = malloc(sizeof(char) * (len1 + len2 + 1));
if (!s)
return (NULL);
while (i < len1)
{
s[i] = s1[i];
i++;
}
if (n < len2)
{
while (i < (len1 + n))
s[i++] = s2[j++];
}
else
{
while (i < (len1 + len2))
s[i++] = s2[j++];
}
s[i] = '\0';
return (s);
}
