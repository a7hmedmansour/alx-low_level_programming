#include <stdio.h>
#include <stdlib.h>
/**
*main- a program that prints its name
*
*@argc:a count of the arguments
*
*@argv:the strings which are those arguments
*Return: 0
*/
int main(int argc __attribute__ ((unused)), char **argv)
{
printf("%s\n", argv[0]);
return (0);
}
