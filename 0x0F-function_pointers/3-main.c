#include "3-calc.h"
/**
*main- 3-main.c
*@argc:a count of the arguments
*
*@argv:the strings which are those arguments
*Return: 0
*/
int main(int argc, char **argv)
{
int a, b, result;
if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);

if (get_op_func(argv[2]) == NULL)
{
printf("Error2\n");
exit(99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
{
printf("Error\n");
exit(100);
}
result = get_op_func(argv[2])(a, b);
printf("%d\n", result);
return (0);
}
