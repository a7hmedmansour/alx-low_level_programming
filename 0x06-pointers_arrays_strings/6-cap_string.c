#include "main.h"
/**
*cap_string- a function that capitalizes all words of a string
*
*@str: string that capitalizes
*
*Return: pointer to string
*/
char *cap_string(char *str)
{
int i = 0, j;
char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}'};
while (str[i] != '\0')
{
/* for frist char  */
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
for (j = 0; j < 13; j++)
{
if (str[i] == sep[j])
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] -= 32;
}
}
i++;
}
return (str);
}
