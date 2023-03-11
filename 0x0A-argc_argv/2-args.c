#include <stdio.h>
#include <stdlib.h>
/**
*main- a program that prints all arguments it receives.
*
*@argc:a count of the arguments
*
*@argv:the strings which are those arguments
*Return: 0
*/
int main(int argc, char **argv)
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
