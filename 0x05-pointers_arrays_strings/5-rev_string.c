#include "main.h"
/**
* rev_string - a function that reverses a string
* @s: string to reverse
*
* Return: void
*/
void rev_string(char *s)
{
int i, len = 0, p;
char *a, temp;
a = s;

while (s[len] != '\0')
{
len++;
}
for (p = 1; p < len; p++)
{
a++;
}

for (i = 0; i < (len / 2); i++)
{
temp = s[i];
s[i] = *a;
*a = temp;
a--;
}
}
