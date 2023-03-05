#include "main.h"
/**
*string_toupper- a function that changes
*all lowercase letters of a string to uppercase.
*
*@str: String is toupper
*
*Return: pointer
*/
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 97 && str[i] <= 122)
str[i] -= 32;
i++;
}
return (str);
}
