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
int i = 0;
while (str[i] != '\0')
{
if (str[i] == ' ')
{
if (str[i + 1] >= 97 && str[i + 1] <= 122)
str[i + 1] -= 32;
}
i++;
}
return (str);
}
