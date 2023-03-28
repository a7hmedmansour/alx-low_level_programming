#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc.
 * @b: # bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *mem_ptr;

mem_ptr = malloc(b);

if (mem_ptr == NULL)
exit(98);

return (mem_ptr);
}
