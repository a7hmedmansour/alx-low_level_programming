#include "main.h"
/**
*create_array - a function that creates an array of chars
*and initializes it with a specific char
*@size: size of array
*@c:char will be initialized
*Return: pointer to memory allocation
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
if (size > 0)
{
char *array;
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
else
{
for (i = 0; i < size; i++)
*(array + i) = c;
return (array);
}
}
else
return (NULL);
}
