#include "main.h"
/**
*leet- a function that encodes a string
*
*@str: String is encoded
*
*Return: pointer to string
*/
char *leet(char *str)
{
char letter[] = "aAeEoOtTlL";
char encode[] = "4433007711";
int i = 0, j;
while (str[i] != '\0')
{
for (j = 0; j <= 9; j++)
{
if (str[i] == letter[j])
str[i] = encode[j];
}
i++;
}
return (str);
}

