#include "main.h"
/**
*rot13-  a function that encodes a string using rot13.
*
*@str: string is encoded
*
*Return: pointer to string
*/
char *rot13(char *str)
{
int i = 0, j;
char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
while (str[i] != '\0')
{
for (j = 0; letter[j] != '\0'; j++)
{
if (str[i] == letter[j])
{
str[i] = rot[j];
break;
}
}
i++;
}
return (str);
}
