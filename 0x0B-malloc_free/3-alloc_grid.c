#include "main.h"
/**
*alloc_grid- a function that returns a pointer to
*a 2 dimensional array of integers.
*@width: width of array
*@height:height of array
*Return:  pointer to a 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
int **array_2d;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

array_2d = malloc(sizeof(int *) * height);

if (array_2d == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
array_2d[i] = malloc(sizeof(int) * width);
if (array_2d[i] == NULL)
{
	for (i--; i >= 0; i--)
	free(array_2d[i]);

	free(array_2d);
	return (NULL);
	}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
array_2d[i][j] = 0;
}
}
return (array_2d);
}

