#include <stdlib.h>
#include "main.h"
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: number of bytes foreach element
 *
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr_ptr;
unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
arr_ptr = malloc(size * nmemb);

if (arr_ptr == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
{
arr_ptr[i] = 0;
}
return (arr_ptr);
}
