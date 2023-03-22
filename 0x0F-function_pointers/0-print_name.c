#include "function_pointers.h"
/**
*print_name- print a name that passed
*@name: name will be printed
*@f: pointer to function to print format
*Return: void
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
