#include <stdlib.h>
#include "main.h"

/**
* *_realloc - a function that reallocates a memory block using malloc and free
* @ptr: a pointer to the memory previously allocated
* @old_size: size of the allocated memory
* @new_size: new size of the new memory block
*
* Return: pointer to the new allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p, *old_ptr;
unsigned int i, count;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));

p = malloc(new_size);
if (!p)
return (NULL);
old_ptr = ptr;

if (new_size < old_size)
count = new_size;
else
count = old_size;

for (i = 0; i < count; i++)
	p[i] = old_ptr[i];
free(ptr);
	return (p);
}
