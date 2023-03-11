#include <stdio.h>
#include <stdlib.h>
/**
*main- a program that adds positive numbers.
*
*@argc:a count of the arguments
*
*@argv:the strings which are those arguments
*Return: 0
*/
int main(int argc, char **argv)
{
int sum = 0, op;
while (--argc)
{
op = atoi(*++argv);
if (op != 0)
sum += op;
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
