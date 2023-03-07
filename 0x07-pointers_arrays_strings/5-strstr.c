#include "main.h"
#include <string.h>
#include <stdbool.h>
/**
*_strstr-  a function that locates a substring
*
*@haystack: String to be scanned.
*
*@needle: String should substring of haystack match it
*
*Return: a pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0, j, n, temp;
bool done = true;
n = strlen(needle);
while (haystack[i] != '\0')
{
temp = i;
for (j = 0; j < n; j++)
{
if (haystack[temp] == needle[j])
{
temp++;
done = true;
}
else
{
done = false;
break;
}
}
if (done)
return (&haystack[i]);
i++;
}
return (&haystack[i]);
}
