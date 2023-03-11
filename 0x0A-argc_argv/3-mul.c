#include <stdio.h>
#include <stdlib.h>
/**
*main- a program that multiplies two numbers.
*
*@argc:a count of the arguments
*
*@argv:the strings which are those arguments
*Return: 0
*/
int main(int argc, char **argv)
{
int op1, op2;
if (argc == 3)
{
op1 = atoi(*++argv);
op2 = atoi(*++argv);
printf("%d\n", (op1 *op2));
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
