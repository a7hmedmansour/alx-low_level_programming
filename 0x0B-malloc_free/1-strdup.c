#include "main.h"
#include <string.h>
/**
*_strdup- a function copy of the string given as a parameter.
*@str:the string given
*Return: returns a pointer to a newly allocated space in memory
*/
char *_strdup(char *str)
{
int size = strlen(str) + 1, i;
char *dupstr;
if (str == NULL)
return (NULL);
else
{
dupstr = malloc(sizeof(char) * size);
if (dupstr == NULL)
return (NULL);
else
{
for (i = 0 ; str[i] != '\0'; i++)
*(dupstr + i) = str[i];
return (dupstr);
}
}
free(dupstr);
}
