#include "main.h"
#include <string.h>
/**
*_strspn- a function that gets the length of a prefix substring.
*
*@s: String to be scanned.
*
*@accept: String containing the characters to match.
*
*
*
*Return: The number of characters is matched
*in the initial segment of s from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i = 0, j, n;
n = strlen(accept);
while (s[i] != ' ' && s[i] != '\0')
{
for (j = 0; j < n; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}
i++;
}
return (count);
}
