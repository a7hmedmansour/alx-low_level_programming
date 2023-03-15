#include "main.h"
#include <string.h>
/**
*_strdup- a function copy of the string given as a parameter.
*@str:the string given
*Return: returns a pointer to a newly allocated space in memory
*/
char *_strdup(char *str)
{
int size, i;
char *dupstr;
if (str == NULL)
{
return (NULL);
}
else 
{
size = strlen(str) + 1;
dupstr = malloc(sizeof(char) * size);
if (dupstr == NULL)
return (NULL);
else
{
for (i = 0 ; str[i] != '\0'; i++)
*(dupstr + i) = str[i];
}
}
return (dupstr);
free(dupstr);
}
