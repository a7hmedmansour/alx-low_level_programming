#include <stdio.h>
#include <math.h>

/**
* main - Prints the largest prime factor of the number 612852475143
*
* Return: Always 0 (Success)
*/
int main(void)
{
long a, m;
long num = 612852475143;
double square = sqrt(num);

for (a = 1; a <= square; a++)
{
if (num % a == 0)
{
m = num / a;
}
}

printf("%ld\n", m);

return (0);
}
