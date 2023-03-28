#include <stdlib.h>
#include "main.h"

/**
 * *array_range - a function that creates an array of integers.
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int *arr_ptr, i, size;
if (min > max)
	return (NULL);
size = max - min + 1;
arr_ptr = malloc(sizeof(int) * size);
if (arr_ptr == NULL)
return (NULL);

for (i = 0; min <= max; i++)
	arr_ptr[i] = min++;

return (arr_ptr);
}
