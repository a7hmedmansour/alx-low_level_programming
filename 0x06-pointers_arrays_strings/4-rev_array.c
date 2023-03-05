#include "main.h"
/**
*reverse_array- a function that reverses the content of an array of integers
*
*@a: array of int
*
*@n: size of array
*
*Return: void
*
*/
void reverse_array(int *a, int n)
{
int temp, i, j = n - 1;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
j--;
}
}
