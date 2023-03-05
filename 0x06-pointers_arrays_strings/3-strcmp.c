#include "main.h"
#include <string.h>
/**
* _strcmp - a function that compares two strings
*@s1: frist String
*@s2: second String
*
*Return: a int value
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] == s2[i])
i++;
else if (s1[i] > s2[i])
return (s1[i] - s2[i]);
else if (s1[i] < s2[i])
return (s1[i] - s2[i]);
}
return (0);
}
