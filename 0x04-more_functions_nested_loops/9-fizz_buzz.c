#include <stdio.h>
/**
*main - Fizz-Buzz test
*for multiples of three print Fizz instead of the number
*for the multiples of five print Buzz
*For numbers which are multiples of both three and five print FizzBuzz
*
*Return: 0
*/
int main(void)
{
int count;
for (count = 1 ; count <= 100; count++)
{
if (count % 3 == 0 && count % 5 == 0)
printf("Fizz Buzz");
else if (count % 3 == 0)
printf("Fizz");
else if (count % 5 == 0)
printf("Buzz");
else
printf("%d", count);
if (count != 100)
printf(" ");
}
printf("\n");
return (0);
}
