#include "function_pointers.h"
/**
*int_index-a function that searches for an integer
*
*@array: array will be used
*@size:  the number of elements in the array
*@cmp: a pointer to the function to be used to compare values
*Return: returns an index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
	if (cmp(*(array + i)) == 1)
	{
	return (i);
	}
}
return (-1);
}
